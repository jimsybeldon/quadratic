/*
  Console Pixel

 An example of using YunShield/Yún board to receive data from the
 Console on the Yún.  In this case, the board turns on an LED when
 it receives the character 'H', and turns off the LED when it
 receives the character 'L'.

 To see the Console, pick your Yún's name and IP address in the Port menu
 then open the Port Monitor. You can also see it by opening a terminal window
 and typing
 ssh root@ yourYunsName.local 'telnet localhost 6571'
 then pressing enter. When prompted for the password, enter it.


 The circuit:
 * LED connected from digital pin 13 to ground

 created 2006
 by David A. Mellis
 modified 25 Jun 2013
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/ConsolePixel

 */

#include <Console.h>
char pinValue[2];

const int ledPin = LED_BUILTIN; //13. the pin that the LED is attached to
char incomingByte;      // a variable to read incoming Console data into

void setup() {
  pinMode(ledPin, OUTPUT);
  Bridge.begin();   // Initialize Bridge
}

void loop() {
  Bridge.get("D13", pinValue, 2);
  int pinValueInt = atoi(pinValue);
  digitalWrite(ledPin, pinValueInt);
}
