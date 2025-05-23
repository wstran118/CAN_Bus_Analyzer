# CAN Bus Data Analyzer

A simple C++ application that connects to a **CAN bus** (via PCAN-USB), captures messages, and displays them in real-time. This tool helps analyze and troubleshoot vehicle diagnostics and CAN bus communication, logging captured messages and allowing for detailed examination.

## **Features**
- Real-time CAN message capture
- Displays message ID and data payload in hexadecimal format
- Saves captured messages to a CSV log file (`can_log.csv`)
- Allows message filtering and analysis
- Supports **PEAK PCAN-USB** interface (can be adapted for other interfaces with slight modifications)

## **Requirements**
- **Hardware**: 
  - **PEAK PCAN-USB** or other compatible CAN interface hardware
- **Software**:
  - **Windows** operating system
  - **Visual Studio** (C++ development environment)
  - **PCAN-Basic SDK** from PEAK (for using PCAN-USB adapter)
  - Basic knowledge of **C++** and **CAN bus protocols**

## **Installation**

### 1. Clone the repository:
```bash
git clone https://github.com/yourusername/can-bus-data-analyzer.git
cd can-bus-data-analyzer
``` 
### 2. Install PCAN-Basic SDK:
Download the PCAN-Basic SDK from PEAK System's website.

Install the SDK and drivers for PCAN-USB (or your adapter).

### 3. Set up the Project:
Open Visual Studio.

Open the project folder (select main.cpp).

Add the PCANBasic.h header and PCANBasic.lib to the project include and library directories (as described in the setup section above).

Ensure the PCANBasic.dll is located next to your executable or in your system's PATH.

### 4. Build and Run:
Press Ctrl + Shift + B to build the project.

Press Ctrl + F5 to run the application.

### 5. Testing:
Connect your PCAN-USB device to a vehicle or CAN bus simulator.

The program will print the captured CAN messages to the console.

Optionally, you can open the can_log.csv file to inspect the logged data.

## Usage
The program will continuously display captured CAN messages in real-time.

It will log the data to can_log.csv for further analysis.

Messages will be displayed in the format:

ID: 0x7E8 Data: 04 41 00 BE 3F A8

## Project Structure
main.cpp — Main program logic for capturing and displaying CAN data.

CANLogger.cpp — Optional module for logging data to CSV (if you decide to separate this).

CANUtils.cpp — Optional utility functions for message parsing and filtering.

can_log.csv — Generated CSV file with logged CAN data.

## Contributing
If you’d like to contribute to this project:

Fork the repository

Create a new branch (git checkout -b feature-branch)

Make your changes

Commit your changes (git commit -am 'Add new feature')

Push to your fork (git push origin feature-branch)

Create a new pull request

## License
This project is open-source and available under the MIT License.

## Acknowledgments
PEAK System for providing the PCAN-Basic SDK and hardware.

