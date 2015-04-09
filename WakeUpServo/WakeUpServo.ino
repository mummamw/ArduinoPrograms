/*Michael Mumma
Project is designed to hold a bucket of water above my bed. 
Upon pressing a push button the program will decide a random time. 
At the random time the bucket will slowly start moving to dump a 
bucket of water. The way to stop it will be a push button on the
other side of the room. Thus making me wake up.
*/
/*
// Sweep
// by BARRAGAN <http://barraganstudio.com>
//https://magnusglad.wordpress.com/2013/03/13/tested-my-sg90-servo-today/
// This example code is in the public domain.

//Red = +5v
//Brown = GND
//Orange = Signal (pin 9 for this code)
 
 
#include <Servo.h>
 
Servo myservo;  // create servo object to control a servo
                // a maximum of eight servo objects can be created
 
int pos = 0;    // variable to store the servo position
 
void setup()
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}
 
 
void loop()
{
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees
  {
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
*/


//=======================================================================================

//Button Code Seeing if it works
/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}
