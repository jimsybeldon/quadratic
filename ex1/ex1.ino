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

#include <Bridge.h>// call for library
#include <Console.h>
// the folllowing is always+1 to the total number of characters
// At least I think that is it.
//char pinValue[5];
const char pinValue[5] = "tobyy";

const int ledPin = LED_BUILTIN; //using the built in led (red)
char incomingByte;      // a variable to read incoming Console data into

void setup() {
  pinMode(ledPin, OUTPUT);
 // Bridge.begin();   // Initialize Bridge
  while (!Serial.available()){
    ;
  }
  Serial.println("Serial set up\n");
}

void loop() {
  //Bridge.get("D13", pinValue, 5);
  while(!Serial.available()){
    ;
  }
  if (pinValue == "tobyy"){
    digitalWrite(ledPin, 0);
    Serial.println("Toby rules\n");
  } else if (pinValue == "daisy"){
    digitalWrite(ledPin, 1);
    Serial.println("Daisy drools\n");
  } else{
    Serial.println("Porkchop reigns supreme!\n");
  }
}
