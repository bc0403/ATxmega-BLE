# ATmega-BLE
A simple demo for ATxmega256A3U + BLE communication.

## Versions:
- V0.2 (April 5, 2017), added usart as stdio;
- V0.1 (April 4, 2017), draft Version;

## Features:
- BLE debug app on mobile phone send a character to Arduino, and the Arduino return it back;

## Usage:
- using "avr-gcc + avrdude" toolchain (ref4);
- use `make program` to compile and upload codes to MCU;

## Hardware connections:
- ATxmega256A3U pins <--->   BLE module pins
- Rx (PC2)    <--->   Tx
- Tx (PC3)    <--->   Rx
- VCC         <--->   VCC
- GND         <--->   GND

## BLE module:
- “LinkSprite”, BLE4.0 Shield based on TICC2541 (ref3)


## BLE app on mobile phone:
- “LightBlue” on App store


## References:
1. Williams E. AVR Programming: Learning to Write Software for Hardware[M]. Maker Media, Inc., 2014.
2. ATxmega256A3U datasheet & manual
3. http://learn.linksprite.com/arduino/shields/how-to-use-ble4-0-shield/ (BLE module)
4. http://maxembedded.com/2015/06/setting-up-avr-gcc-toolchain-on-linux-and-mac-os-x/ (avr-gcc + avrdude toolchain)
5. http://microfluidics.utoronto.ca/gitlab/dstat/dstat-firmware (ATxmega256A3U board)
6. https://morf.lv/guide-to-xmega-usart-aka-serial-communication (ATxmega usart usage)
7. http://www.voidcn.com/blog/lengyuegg/article/p-858330.html (usart as stdio)
