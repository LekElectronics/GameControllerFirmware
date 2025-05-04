# GameControllerFirmware
A simple STM32 firmware implementation for creating a USB HID device with a single-axis joystick (like a steering wheel) and a general-purpose OUT endpoint for output control (like LEDs).

Demo is initaially created for the STM32F302 using STM32CubeMX to create a USB HID device, then manually editing the USB descriptors to set a single axis and create the out endpoint.

To Build:
Can use VSCode with the stm32-for-vscode extension.  
Debug with STLink

To Test: 
Windows - run jpy.cpl and see this device in the list of installed game controllers. Open the properties and see the reticle moving left-right.
Run the dotNet GameControllerTest to send output data to the device, see it be caught by the STM32 in the USBD_HID_DataOut() function in usbd_hid.c.  

