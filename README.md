Embedded Software Project Using ATmega32

Project Overview

This project is an embedded software application developed for the ATmega32 microcontroller. It integrates the Mbed TLS library, specifically the SHA-256 module, to perform secure hashing operations. The project demonstrates the use of the Mbed TLS library in an embedded environment.
Prerequisites
To build and run this project, the following tools and software are required:
Git: For version control and managing the project repository.
CMake: For building the project and managing dependencies.
AVR GCC: For compiling the code for the ATmega32 microcontroller.
Microchip Studio  or any other preferred IDE for AVR development.
Project Structure
The project consists of the following directories:
MCAL: Microcontroller Abstraction Layer containing low-level drivers.
HAL: Hardware Abstraction Layer containing drivers for peripherals.
APP: Application layer containing the main logic of the project( we didn’t need it as we tested sha256 with the main).
CFG: Configuration files for setting up the peripherals and libraries.
Include: Header files for the project.(integrated from the mbedtls library
SRC: Source files, including the necessary files from the mbedtls  library.
Some needed files like : 
-Utils: that contains macros like function like read_bit, set_bit.. and so on to treat with the registers of the Microcontroller.
-Common.h : is needed for the header files of the library.
-MemMap: contains the addresses of the registers (specific for the used target).
-StdTypes : conatains the main used data types .
Setup Instructions
1. Clone the Repository
Clone the project repository to your local machine using Git:
git clone <(https://github.com/ranamahmoud-svg/mbed-tls-embedded-project.git)>
2. Install Dependencies
Ensure CMake and AVR GCC are installed on your system. You can download them from their official websites:
CMake
AVR GCC
3.Install mbedtls library 
Which is an opensource library so you can download it. 
4. Configure the Project
Navigate to the project directory and run CMake to configure the build system:
cd <project-directory>
cmake .
5. Build the Project
Compile the project using your preferred method:
If using CMake: 
cmake --build .
 If using Atmel Studio, import the project and build it within the IDE.
6. Flash the Firmware
Use an AVR programmer (e.g., USBasp) to upload the compiled firmware to the ATmega32 microcontroller.
6. Test the Application
Run the application on the ATmega32 microcontroller and observe the output of the SHA-256 hashing module. Use a serial terminal like LCD (there is written peripheral to LCD 16*2) to view debug messages if applicable.
- Also you can use the UART and connect the MC with laptop to send and receive data from MC to PC and vice versa, you can use Docklight as a desktop app to send the transaction of data between MC and PC , you can download it through this link: 
https://docklight.de/downloads/
Repository Contents
Source Code: Implementation of the SHA-256 module using Mbed TLS.
README: Instructions for setting up and running the project.
Configuration Files: Peripheral and library settings.
