# PIC18f57Q43 MIRF PORT
This is a ported version of the Mirf library for the PIC18f57Q43 MCU. This repository contains the library (Mirf.h Mirf.c) and an example Mplab project with its ESP32 (ESP-IDF via platformio) project counterpart for communication.

The ESP32 port used and referenced is [here](https://github.com/nopnop2002/esp-idf-mirf/tree/master)

# Requirements
- MPLAB X IDE
- PlatformIO (VSCode)

# Setup
- Install and setup both MPLab X and PlatformIO
- Clone the repository and open the projects
- In MPLAB X, use MCC to configure the GPIO pins (CE and CSN) as outputs and give them the correct names (nRF24_CSN and nRF24_CE).
- Then, configure SPI_HOST in MCC, and then in the SPI.h generated file, change the first configuration to { 0x2, 0xC0, 0x0, 0xff, 0x0 }.
- Run the projects on both the ESP and PIC.
- Open the serial monitor on PlatformIO (Plug icon at the bottom), If you see the received message printed repeatedly, this means its working fine.