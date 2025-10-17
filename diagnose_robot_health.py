#!/usr/bin/env python3
"""
Robot Health Diagnostic Script
This script helps diagnose why the robot is not showing white LED (healthy status).
It provides various diagnostic tools and checks.
"""

import subprocess
import time
import json
import os

def run_command(cmd, timeout=10):
    """Run a command and return output"""
    try:
        result = subprocess.run(cmd, shell=True, capture_output=True, text=True, timeout=timeout)
        return result.returncode, result.stdout, result.stderr
    except subprocess.TimeoutExpired:
        return -1, "", "Command timed out"

def check_ros2_nodes():
    """Check if ROS2 nodes are running"""
    print("=== ROS2 Node Status ===")
    
    # Check if ROS2 is available
    code, stdout, stderr = run_command("which ros2")
    if code != 0:
        print("❌ ROS2 not found in PATH")
        return False
    
    # List running nodes
    code, stdout, stderr = run_command("ros2 node list")
    if code == 0:
        print("✅ ROS2 nodes running:")
        for line in stdout.strip().split('\n'):
            if line.strip():
                print(f"  - {line}")
    else:
        print("❌ Failed to list ROS2 nodes")
        return False
    
    return True

def check_modbus_controller():
    """Check ModbusController node specifically"""
    print("\n=== ModbusController Status ===")
    
    # Check if lower_level_controller node is running
    code, stdout, stderr = run_command("ros2 node list | grep lower_level_controller")
    if code == 0:
        print("✅ lower_level_controller node is running")
    else:
        print("❌ lower_level_controller node is NOT running")
        return False
    
    # Check node info
    code, stdout, stderr = run_command("ros2 node info /lower_level_controller")
    if code == 0:
        print("✅ Node info retrieved successfully")
        # Look for Modbus-related topics or services
        if "modbus" in stdout.lower():
            print("✅ Modbus-related functionality detected")
        else:
            print("⚠️  No Modbus-related functionality detected in node info")
    else:
        print("❌ Failed to get node info")
    
    return True

def check_network_connectivity():
    """Check network connectivity to PLC"""
    print("\n=== Network Connectivity ===")
    
    plc_ips = ["192.168.1.125", "192.168.1.150"]
    
    for ip in plc_ips:
        print(f"Testing connectivity to {ip}...")
        code, stdout, stderr = run_command(f"ping -c 1 -W 2 {ip}")
        if code == 0:
            print(f"✅ {ip} is reachable")
        else:
            print(f"❌ {ip} is NOT reachable")
    
    # Check if we can reach port 502 (Modbus)
    for ip in plc_ips:
        print(f"Testing Modbus port 502 on {ip}...")
        code, stdout, stderr = run_command(f"timeout 3 bash -c '</dev/tcp/{ip}/502'")
        if code == 0:
            print(f"✅ Modbus port 502 is open on {ip}")
        else:
            print(f"❌ Modbus port 502 is NOT accessible on {ip}")

def check_ros2_topics():
    """Check relevant ROS2 topics"""
    print("\n=== ROS2 Topics ===")
    
    code, stdout, stderr = run_command("ros2 topic list")
    if code == 0:
        topics = stdout.strip().split('\n')
        
        # Look for relevant topics
        relevant_topics = [
            "robot_status",
            "lifterFeedback", 
            "battery_data",
            "emergency_stop",
            "cmd_vel"
        ]
        
        for topic in relevant_topics:
            if any(topic in t for t in topics):
                print(f"✅ Found topic containing '{topic}'")
            else:
                print(f"❌ Topic containing '{topic}' not found")
    else:
        print("❌ Failed to list ROS2 topics")

def check_logs():
    """Check recent logs for errors"""
    print("\n=== Recent Log Analysis ===")
    
    # Check for common error patterns
    error_patterns = [
        "Failed to connect to Roboteq device",
        "Modbus not connected",
        "Failed to write modbus data",
        "Exception in main",
        "can't subtract times",
        "guard condition",
        "ConnectionRefusedError"
    ]
    
    print("Looking for error patterns in recent logs...")
    for pattern in error_patterns:
        code, stdout, stderr = run_command(f"journalctl --since '5 minutes ago' | grep -i '{pattern}' | tail -3")
        if code == 0 and stdout.strip():
            print(f"⚠️  Found '{pattern}':")
            for line in stdout.strip().split('\n'):
                if line.strip():
                    print(f"    {line}")
        else:
            print(f"✅ No recent '{pattern}' errors found")

def suggest_solutions():
    """Suggest solutions based on findings"""
    print("\n=== Suggested Solutions ===")
    
    print("Based on the analysis, here are the most likely solutions:")
    print()
    
    print("1. 🔧 VERIFY PLC REGISTER ADDRESSES")
    print("   - Connect to the actual PLC using PLC programming software")
    print("   - Verify that registers 13, 15, and 41 are correct")
    print("   - Check if the PLC uses different addressing scheme")
    print()
    
    print("2. 🔧 CHECK PLC STATE AND FAULTS")
    print("   - Ensure PLC is not in fault state")
    print("   - Reset any active faults")
    print("   - Verify PLC is in correct operational mode")
    print()
    
    print("3. 🔧 ADD DETAILED MODBUS LOGGING")
    print("   - Add more detailed logging to ModbusController")
    print("   - Log actual register values after writing")
    print("   - Add error checking for Modbus write responses")
    print()
    
    print("4. 🔧 TEST INDIVIDUAL REGISTER WRITES")
    print("   - Create test script to write each register individually")
    print("   - Test different combinations of register values")
    print("   - Verify each write operation succeeds")
    print()
    
    print("5. 🔧 CHECK NETWORK CONNECTIVITY")
    print("   - Verify robot can reach PLC on network")
    print("   - Test with different Modbus client tools")
    print("   - Check firewall settings")

def main():
    """Main diagnostic function"""
    print("🤖 Robot Health Diagnostic Tool")
    print("=" * 50)
    print("This tool helps diagnose why the robot is not showing white LED (healthy status)")
    print()
    
    # Run all diagnostic checks
    check_ros2_nodes()
    check_modbus_controller()
    check_network_connectivity()
    check_ros2_topics()
    check_logs()
    suggest_solutions()
    
    print("\n" + "=" * 50)
    print("🏁 Diagnostic complete!")
    print("If the robot is still not white, the issue is most likely:")
    print("1. PLC register address mismatch")
    print("2. Additional PLC logic requirements")
    print("3. Network connectivity issues")
    print()
    print("Next step: Verify actual PLC register addresses using PLC programming software")

if __name__ == "__main__":
    main()