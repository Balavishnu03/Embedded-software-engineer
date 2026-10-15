Smart Vehicle Monitoring and Diagnostic System

1. Project Overview

The Smart Vehicle Monitoring and Diagnostic System is a C-based embedded systems simulation project designed to monitor vehicle parameters and identify abnormal operating conditions.

The system simulates sensor readings, evaluates predefined safety thresholds, and generates diagnostic warnings when abnormal values are detected.

Project Type: Embedded Systems Simulation
Programming Language: C
Development Environment: Visual Studio Code
Hardware Requirement: Not required for the current simulation

2. Objectives

- Monitor simulated engine temperature.
- Check battery voltage levels.
- Monitor engine RPM.
- Detect low fuel conditions.
- Identify abnormal sensor readings.
- Generate diagnostic fault codes.
- Demonstrate modular embedded C programming.

3. System Features

Engine Temperature Monitoring

Checks whether the simulated engine temperature exceeds the configured threshold.

Battery Voltage Monitoring

Identifies battery voltage values outside the configured operating range.

Engine RPM Monitoring

Checks engine speed against predefined limits.

Fuel Level Monitoring

Generates a warning when the simulated fuel level becomes too low.

Diagnostic System

Assigns diagnostic codes to detected faults.

Input Validation

Rejects invalid or out-of-range sensor inputs.

4. Embedded C Concepts

- Structures and enumerations
- Functions and modular programming
- Pointers
- Conditional statements
- Bitwise operations
- Input validation
- Error handling
- State management

5. Project Structure

Smart-Vehicle-Monitoring/
├── main.c
├── vehicle_monitor.h
├── vehicle_monitor.c
├── diagnostics.h
├── diagnostics.c
├── test_cases.md
└── README.md

6. Expected Output

Example simulated sensor readings:

===== VEHICLE MONITORING SYSTEM =====
Engine Temperature : 95.0 C
Battery Voltage    : 12.4 V
Engine RPM         : 2500
Fuel Level         : 35%

System Status      : WARNING
Diagnostic Code    : ENGINE_TEMP_HIGH

The output above is an illustrative example, not a verified test result.

7. Testing

The project will be tested using normal, abnormal, and invalid simulated sensor inputs.

Test cases will cover temperature warnings, battery voltage limits, RPM limits, low fuel conditions, and invalid readings.

8. Future Improvements

- Add unit tests.
- Implement a menu-driven interface.
- Improve diagnostic reporting.
- Separate monitoring and diagnostic modules.
- Explore microcontroller hardware integration in the future.

9. Disclaimer

This project is a software simulation for educational purposes. It does not read actual vehicle sensors and is not intended for real vehicle control or safety-critical use.
