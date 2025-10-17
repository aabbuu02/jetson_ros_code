#!/usr/bin/env python3
"""
Test script to verify PLC communication and check if Modbus writes are working.
This script will connect to the PLC and read/write the critical registers for robot health.
"""

import socket
import struct
import time

def create_modbus_request(unit_id, function_code, start_address, num_registers, values=None):
    """Create a Modbus TCP request"""
    transaction_id = 1
    protocol_id = 0
    length = 6 + (num_registers * 2 if values is None else len(values) * 2)
    
    if values is None:
        # Read request
        request = struct.pack('>HHHBBHH', 
                            transaction_id, protocol_id, length, unit_id, function_code, 
                            start_address, num_registers)
    else:
        # Write request
        length = 6 + len(values) * 2
        request = struct.pack('>HHHBBH', 
                            transaction_id, protocol_id, length, unit_id, function_code, 
                            start_address)
        for value in values:
            request += struct.pack('>H', value)
    
    return request

def parse_modbus_response(data):
    """Parse Modbus TCP response"""
    if len(data) < 8:
        return None
    
    transaction_id, protocol_id, length, unit_id, function_code = struct.unpack('>HHHBB', data[:8])
    
    if function_code == 0x03:  # Read response
        byte_count = data[8]
        values = []
        for i in range(0, byte_count, 2):
            value = struct.unpack('>H', data[9+i:11+i])[0]
            values.append(value)
        return values
    elif function_code == 0x06:  # Write response
        return "Write successful"
    else:
        return f"Function code: {function_code}"

def test_plc_connection(host, port):
    """Test PLC connection and read critical registers"""
    print(f"Testing PLC connection to {host}:{port}")
    
    try:
        # Connect to PLC
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        sock.settimeout(5)
        sock.connect((host, port))
        print("✓ Connected to PLC successfully")
        
        # Test 1: Read current values of critical registers
        print("\n--- Reading current register values ---")
        
        # Read registers 13-16 (PICKING_READY, PICKING_START, DROPPING_READY, DROPPING_START)
        read_request = create_modbus_request(1, 0x03, 13, 4)
        sock.send(read_request)
        response = sock.recv(1024)
        
        if response:
            values = parse_modbus_response(response)
            if isinstance(values, list) and len(values) >= 4:
                print(f"Register 13 (PICKING_READY): {values[0]}")
                print(f"Register 14 (PICKING_START): {values[1]}")
                print(f"Register 15 (DROPPING_READY): {values[2]}")
                print(f"Register 16 (DROPPING_START): {values[3]}")
            else:
                print(f"Unexpected response: {values}")
        
        # Read register 41 (ROBOT_RUNNING_FB)
        read_request = create_modbus_request(1, 0x03, 41, 1)
        sock.send(read_request)
        response = sock.recv(1024)
        
        if response:
            values = parse_modbus_response(response)
            if isinstance(values, list) and len(values) >= 1:
                print(f"Register 41 (ROBOT_RUNNING_FB): {values[0]}")
            else:
                print(f"Unexpected response: {values}")
        
        # Test 2: Write robot ready signals
        print("\n--- Writing robot ready signals ---")
        
        # Write PICKING_READY = 1 (register 13)
        write_request = create_modbus_request(1, 0x06, 13, 1, [1])
        sock.send(write_request)
        response = sock.recv(1024)
        print(f"PICKING_READY write result: {parse_modbus_response(response)}")
        
        time.sleep(0.1)
        
        # Write DROPPING_READY = 1 (register 15)
        write_request = create_modbus_request(1, 0x06, 15, 1, [1])
        sock.send(write_request)
        response = sock.recv(1024)
        print(f"DROPPING_READY write result: {parse_modbus_response(response)}")
        
        time.sleep(0.1)
        
        # Write ROBOT_RUNNING = 1 (register 41)
        write_request = create_modbus_request(1, 0x06, 41, 1, [1])
        sock.send(write_request)
        response = sock.recv(1024)
        print(f"ROBOT_RUNNING write result: {parse_modbus_response(response)}")
        
        # Test 3: Verify writes by reading again
        print("\n--- Verifying writes ---")
        time.sleep(0.5)
        
        read_request = create_modbus_request(1, 0x03, 13, 4)
        sock.send(read_request)
        response = sock.recv(1024)
        
        if response:
            values = parse_modbus_response(response)
            if isinstance(values, list) and len(values) >= 4:
                print(f"Register 13 (PICKING_READY): {values[0]} {'✓' if values[0] == 1 else '✗'}")
                print(f"Register 14 (PICKING_START): {values[1]}")
                print(f"Register 15 (DROPPING_READY): {values[2]} {'✓' if values[2] == 1 else '✗'}")
                print(f"Register 16 (DROPPING_START): {values[3]}")
            else:
                print(f"Unexpected response: {values}")
        
        read_request = create_modbus_request(1, 0x03, 41, 1)
        sock.send(read_request)
        response = sock.recv(1024)
        
        if response:
            values = parse_modbus_response(response)
            if isinstance(values, list) and len(values) >= 1:
                print(f"Register 41 (ROBOT_RUNNING_FB): {values[0]} {'✓' if values[0] == 1 else '✗'}")
            else:
                print(f"Unexpected response: {values}")
        
        sock.close()
        print("\n✓ PLC communication test completed")
        
        # Check if all critical signals are set
        if (isinstance(values, list) and len(values) >= 4 and 
            values[0] == 1 and values[2] == 1 and values[0] == 1):
            print("✓ All robot ready signals are set - White LED should be ON")
        else:
            print("✗ Robot ready signals are not properly set - White LED may be OFF")
            
    except Exception as e:
        print(f"✗ Error: {e}")

if __name__ == "__main__":
    # Test both PLC IPs mentioned in the logs
    print("=== PLC Communication Test ===")
    print("Testing PLC communication to verify robot health signals...")
    print()
    
    # Test primary PLC (192.168.1.125)
    test_plc_connection("192.168.1.125", 502)
    
    print("\n" + "="*50)
    
    # Test secondary PLC (192.168.1.150) 
    test_plc_connection("192.168.1.150", 502)