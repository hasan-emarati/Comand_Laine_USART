

#  Command Line Interface Project

![image](https://github.com/user-attachments/assets/27a0c7d0-7cd0-4f7f-99e2-a0f5efe6d756)


## Overview
This project is a Command Line Interface (CLI) implementation for the AVR ATmega16 microcontroller. It allows users to interact with the microcontroller via a serial terminal, providing various commands to control and monitor the system. The project includes functionalities such as reading analog inputs, controlling digital outputs, displaying messages on an LCD, and retrieving system information.

## Features
- **Serial Communication**: The project uses USART for serial communication at a baud rate of 1200.
- **Analog Input Reading**: Reads analog values from the ADC channels and displays them.
- **Digital Output Control**: Controls the state of digital pins on Port B.
- **LCD Display**: Displays messages on an alphanumeric LCD.
- **System Information**: Retrieves and displays system information such as clock frequency, memory model, and more.
- **Command Line Interface**: Provides a set of commands for interacting with the system.

## Hardware Requirements
- **Microcontroller**: ATmega16
- **Clock Frequency**: 16 MHz
- **LCD**: Alphanumeric LCD connected to Port C
- **Serial Interface**: USART for communication
- **Analog Inputs**: Connected to Port A
- **Digital Outputs**: Connected to Port B

## Software Requirements
- **Compiler**: CodeWizardAVR V3.12 or compatible
- **Libraries**: Standard AVR libraries, alcd.h for LCD functions

## Project Structure
- **Main File**: Contains the main loop and initialization code.
- **USART Handling**: Includes interrupt service routines for USART communication.
- **ADC Handling**: Functions for reading analog inputs.
- **LCD Handling**: Functions for controlling the alphanumeric LCD.
- **Command Processing**: Handles user commands and executes corresponding actions.

## Commands
- **help**: Displays a list of available commands.
- **syslog**: Displays system log information.
- **get port**: Controls digital outputs on Port B.
  - Example: `get portB.0=1` sets Port B, Pin 0 to high.
- **get pin**: Reads analog inputs from Port A.
  - Example: `get pinA.0` reads the analog value from Port A, Pin 0.
- **set password**: Sets a password for the system.
- **lcd_puts**: Displays a message on the LCD.
  - Example: `lcd_puts(hello world)` displays "hello world" on the LCD.
- **sysinfo**: Displays system information.
- **Register**: Displays the configuration of the ports.
- **echo**: Echoes the input command.

## Usage
1. **Compile and Upload**: Compile the code using CodeWizardAVR or a compatible compiler and upload it to the ATmega16 microcontroller.
2. **Connect Serial Terminal**: Connect a serial terminal to the microcontroller with a baud rate of 1200.
3. **Interact with CLI**: Use the provided commands to interact with the system.

## Example Commands
- To turn on Port B, Pin 0:
  ```
  get portB.0=1
  ```
- To read the analog value from Port A, Pin 0:
  ```
  get pinA.0
  ```
- To display a message on the LCD:
  ```
  lcd_puts(hello world)
  ```

## Notes
- Ensure that the hardware connections match the configuration in the code.
- The project is designed for educational purposes and can be extended with additional features as needed.

## License
This project is open-source and available under the MIT License. Feel free to modify and distribute it as per the license terms.

## Author
- **Name**: [Your Name]
- **Company**: [Your Company]
- **Date**: 4/4/2022

## Acknowledgments
- **CodeWizardAVR**: For the automatic program generator.
- **HP InfoTech s.r.l.**: For providing the tools and libraries.

For more information, please refer to the code comments and documentation.
