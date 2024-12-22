# Arduino Auto Door System

This project is an Arduino-based system for automatically opening and closing doors. It features password entry, RFID tag and card recognition for door access, and EEPROM for data storage and management.

## 🖼️ Project Images

### Main Images

![Real-Time Monitoring](./image/main.jpg)  

---

## 📊 System Architecture Diagram

### Diagram Overview

![System Diagram](flowchart.png)

---

![Real-Time Monitoring](block_diagram.jpg)  

---

## Key Components

- **Arduino Board**: Core controller of the project
- **RFID Reader**: Recognizes tags and cards to unlock the door
- **EEPROM**: Stores user data for persistence across reboots
- **Keypad Matrix**: For password entry
- **LCD Display**: Shows system status and messages
- **Servo Motor**: Handles the door movement
- **Piezo Buzzer**: Provides notification sounds
- **7-Segment Display**: Displays additional information

## Main Features

1. **Password Authentication**
   - Allows users to unlock the door by entering a password.

2. **RFID Authentication**
   - Unlocks the door when a registered RFID tag or card is detected.

3. **EEPROM Data Storage**
   - Stores user passwords and registered tag information, ensuring data persistence after power cycling.

4. **Status Display**
   - Displays the current system status on an LCD.

## Code Structure

### Key Header Files
- `Control_Pwd.h`: Includes functionality for password input and control
- `KeyMatrix.h`: Configures and operates the keypad matrix
- `LCD.h`: Manages the LCD display
- `Motor.h`: Handles servo motor operations
- `Sound.h`: Controls the piezo buzzer for notifications
- `7Segment.h`: Operates the 7-segment display

### Main Functions
- `Set_Matrix()`: Initializes the keypad
- `Set_RFRC()`: Initializes the RFID reader
- `Set_Lcd()`: Initializes the LCD display
- `Set_piezo()`: Initializes the buzzer
- `Set_Servo()`: Initializes the servo motor
- `Set_Segment()`: Initializes the 7-segment display
- `Show_Lock_Door()`: Displays the locked state
- `Open_Door()`: Handles the door unlocking process
- `Set_RFRC_Pwd()`: Processes RFID or password recognition
- `Sign_up()`: Registers a new user
- `Save_EEPROM()`: Saves user data to EEPROM

## Hardware Connections

1. **RFID Reader**
   - Connects to Arduino via SPI interface
2. **Keypad Matrix**
   - Connects to digital pins for input signal processing
3. **Servo Motor**
   - Controlled via PWM pins
4. **LCD Display**
   - Connects to Arduino via I2C interface
5. **7-Segment Display**
   - Connects to digital pins for displaying status information
6. **Piezo Buzzer**
   - Controlled via digital pins for sound notifications
