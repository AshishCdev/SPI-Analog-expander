# SPI-Analog-expander
This is the firmware code to use AVR microcontrollers as analog input for Raspberry pi.

Since Raspbarry pi has no direct analog input, we can use this code to convert analog to digital and send the vlue via SPI of AVR.
This code is 
tested with ATMEGA16

# Specifications
8 bit digital output with 10.24 mV step size.
3us conversion time @ 16Mhz

#settings
16 Mhz external XTAL
Fuse bit values for low bit 0xC9
                    high bit 0xFF

#Data Frames
Since this module uses SPI, first we need to sent the input channel number of ADC. After the first byte of data it sends the analog value of targeted channel.

