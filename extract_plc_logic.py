#!/usr/bin/env python3
"""
Extract and analyze PLC logic from PDF files
"""

import PyPDF2
import os
import json
import re
from pathlib import Path

def extract_text_from_pdf(pdf_path):
    """Extract text from PDF file"""
    try:
        with open(pdf_path, 'rb') as file:
            pdf_reader = PyPDF2.PdfReader(file)
            text = ""
            for page in pdf_reader.pages:
                text += page.extract_text() + "\n"
            return text
    except Exception as e:
        print(f"Error extracting text from {pdf_path}: {e}")
        return ""

def analyze_ros_data(text):
    """Analyze ROS DATA.pdf content"""
    print("📡 Analyzing ROS DATA.pdf...")
    
    # Look for modbus register information
    modbus_patterns = [
        r'register\s+(\d+)',
        r'address\s+(\d+)',
        r'(\d+)\s*:\s*(\w+)',
        r'(\w+)\s*=\s*(\d+)'
    ]
    
    registers = {}
    for pattern in modbus_patterns:
        matches = re.findall(pattern, text, re.IGNORECASE)
        for match in matches:
            if len(match) == 2:
                registers[match[1]] = match[0]
    
    # Look for communication protocol info
    protocol_info = {
        'ip_addresses': re.findall(r'\d+\.\d+\.\d+\.\d+', text),
        'ports': re.findall(r'port\s*:?\s*(\d+)', text, re.IGNORECASE),
        'timeouts': re.findall(r'timeout\s*:?\s*(\d+)', text, re.IGNORECASE),
        'frequencies': re.findall(r'(\d+)\s*Hz', text, re.IGNORECASE)
    }
    
    return {
        'registers': registers,
        'protocol_info': protocol_info,
        'raw_text': text[:1000] + "..." if len(text) > 1000 else text
    }

def analyze_picking_logic(text):
    """Analyze PICKING AUTO LOGIC.pdf content"""
    print("📦 Analyzing PICKING AUTO LOGIC.pdf...")
    
    # Look for state machine information
    states = re.findall(r'state\s*:?\s*(\w+)', text, re.IGNORECASE)
    conditions = re.findall(r'if\s+(\w+)', text, re.IGNORECASE)
    actions = re.findall(r'action\s*:?\s*(\w+)', text, re.IGNORECASE)
    
    # Look for safety information
    safety_terms = re.findall(r'(safety|emergency|stop|limit|alarm)', text, re.IGNORECASE)
    
    return {
        'states': list(set(states)),
        'conditions': list(set(conditions)),
        'actions': list(set(actions)),
        'safety_terms': list(set(safety_terms)),
        'raw_text': text[:1000] + "..." if len(text) > 1000 else text
    }

def analyze_dropping_logic(text):
    """Analyze DROPPING AUTO LOGIC.pdf content"""
    print("📤 Analyzing DROPPING AUTO LOGIC.pdf...")
    
    # Similar analysis as picking logic
    states = re.findall(r'state\s*:?\s*(\w+)', text, re.IGNORECASE)
    conditions = re.findall(r'if\s+(\w+)', text, re.IGNORECASE)
    actions = re.findall(r'action\s*:?\s*(\w+)', text, re.IGNORECASE)
    safety_terms = re.findall(r'(safety|emergency|stop|limit|alarm)', text, re.IGNORECASE)
    
    return {
        'states': list(set(states)),
        'conditions': list(set(conditions)),
        'actions': list(set(actions)),
        'safety_terms': list(set(safety_terms)),
        'raw_text': text[:1000] + "..." if len(text) > 1000 else text
    }

def analyze_motor_control(text, motor_name):
    """Analyze motor control PDF content"""
    print(f"⚙️ Analyzing {motor_name}...")
    
    # Look for motor parameters
    parameters = re.findall(r'(\w+)\s*:?\s*(\d+\.?\d*)', text, re.IGNORECASE)
    limits = re.findall(r'limit\s*:?\s*(\d+\.?\d*)', text, re.IGNORECASE)
    speeds = re.findall(r'speed\s*:?\s*(\d+\.?\d*)', text, re.IGNORECASE)
    
    return {
        'parameters': dict(parameters),
        'limits': limits,
        'speeds': speeds,
        'raw_text': text[:1000] + "..." if len(text) > 1000 else text
    }

def analyze_alarms(text):
    """Analyze ALARMS.pdf content"""
    print("🚨 Analyzing ALARMS.pdf...")
    
    # Look for alarm definitions
    alarms = re.findall(r'alarm\s*:?\s*(\w+)', text, re.IGNORECASE)
    errors = re.findall(r'error\s*:?\s*(\w+)', text, re.IGNORECASE)
    priorities = re.findall(r'priority\s*:?\s*(\w+)', text, re.IGNORECASE)
    
    return {
        'alarms': list(set(alarms)),
        'errors': list(set(errors)),
        'priorities': list(set(priorities)),
        'raw_text': text[:1000] + "..." if len(text) > 1000 else text
    }

def analyze_mapping(text):
    """Analyze MAPPING.pdf content"""
    print("🗺️ Analyzing MAPPING.pdf...")
    
    # Look for coordinate information
    coordinates = re.findall(r'(\w+)\s*:?\s*(\d+\.?\d*)', text, re.IGNORECASE)
    positions = re.findall(r'position\s*:?\s*(\w+)', text, re.IGNORECASE)
    
    return {
        'coordinates': dict(coordinates),
        'positions': list(set(positions)),
        'raw_text': text[:1000] + "..." if len(text) > 1000 else text
    }

def analyze_parameters(text):
    """Analyze SETTABLE PARAMETERS.pdf content"""
    print("⚙️ Analyzing SETTABLE PARAMETERS.pdf...")
    
    # Look for parameter definitions
    parameters = re.findall(r'(\w+)\s*:?\s*(\d+\.?\d*)', text, re.IGNORECASE)
    ranges = re.findall(r'range\s*:?\s*(\d+\.?\d*)\s*-\s*(\d+\.?\d*)', text, re.IGNORECASE)
    defaults = re.findall(r'default\s*:?\s*(\d+\.?\d*)', text, re.IGNORECASE)
    
    return {
        'parameters': dict(parameters),
        'ranges': ranges,
        'defaults': defaults,
        'raw_text': text[:1000] + "..." if len(text) > 1000 else text
    }

def main():
    """Main analysis function"""
    plc_dir = Path("/workspace/ZEUS PLC PROGRAM")
    results = {}
    
    # Define PDF files and their analysis functions
    pdf_files = {
        "ROS DATA.pdf": analyze_ros_data,
        "PICKING AUTO LOGIC.pdf": analyze_picking_logic,
        "DROPPING AUTO LOGIC.pdf": analyze_dropping_logic,
        "LIFTER MOTOR.pdf": lambda text: analyze_motor_control(text, "LIFTER MOTOR"),
        "EXTRACTOR MOTOR.pdf": lambda text: analyze_motor_control(text, "EXTRACTOR MOTOR"),
        "SWING ARM MOTOR.pdf": lambda text: analyze_motor_control(text, "SWING ARM MOTOR"),
        "TT MOTOR.pdf": lambda text: analyze_motor_control(text, "TT MOTOR"),
        "ALARMS.pdf": analyze_alarms,
        "MAPPING.pdf": analyze_mapping,
        "SETTABLE PARAMETERS.pdf": analyze_parameters
    }
    
    print("🔍 Starting comprehensive PLC logic analysis...")
    print("=" * 60)
    
    for pdf_file, analysis_func in pdf_files.items():
        pdf_path = plc_dir / pdf_file
        if pdf_path.exists():
            print(f"\n📄 Processing {pdf_file}...")
            text = extract_text_from_pdf(pdf_path)
            if text:
                results[pdf_file] = analysis_func(text)
                print(f"✅ {pdf_file} analyzed successfully")
            else:
                print(f"❌ Failed to extract text from {pdf_file}")
        else:
            print(f"❌ {pdf_file} not found")
    
    # Save results
    output_file = plc_dir / "PLC_ANALYSIS_RESULTS.json"
    with open(output_file, 'w') as f:
        json.dump(results, f, indent=2)
    
    print(f"\n📊 Analysis results saved to: {output_file}")
    
    # Generate summary
    print("\n" + "=" * 60)
    print("📋 ANALYSIS SUMMARY")
    print("=" * 60)
    
    for pdf_file, data in results.items():
        print(f"\n📄 {pdf_file}:")
        if 'registers' in data:
            print(f"  - Registers found: {len(data['registers'])}")
        if 'states' in data:
            print(f"  - States found: {len(data['states'])}")
        if 'alarms' in data:
            print(f"  - Alarms found: {len(data['alarms'])}")
        if 'parameters' in data:
            print(f"  - Parameters found: {len(data['parameters'])}")
    
    print(f"\n✅ Analysis completed! Check {output_file} for detailed results.")

if __name__ == "__main__":
    main()