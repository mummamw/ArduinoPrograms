/*Michael Mumma
Project is designed to turn a server motor when a push button is pressed.

Purpose: Wake myself up in the morning.

Setup: A bucket will be mounted above my head in bed will filled with water. 
When I press the button I will have a random amount of time before the 
bucket drops on my head. To turn of the motor I will have to cross the room
to hit another button that breaks the program.

Parts
  (1) Arduino Uno
  (1) Tower Pro - SG90 - Micro Servo 9g
  (1) Red LED
  (2) Push buttons
  (1) Cable for Arduino to USB
*/
//==================Includes===================================================

#include <Servo.h>

//==================Pin values and Locations===================================

  //Servo Section
    //Red = +5v
    //Brown = GND
    //Orange = Signal (pin 9 for this code)
  
  //Button Section
    const int buttonPin = 2;
    const int ledPin =  13;

//==================Objects - variables========================================
    //Servo Section
        int pos = 0;    // variable to store the servo position
        Servo myservo;  // create servo object to control a servo
                        // a maximum of eight servo objects can be created


//==================Setup======================================================

void setup() {
	myservo.attach(9);   // attaches the servo on pin 9 to the servo object
}

void loop(){
	if(buttonPress == True){
		wait(rand);
		for(pos = 0; pos < 180; pos += 1)  {                                  
            myservo.write(pos);              // tell servo to go to position in variable 'pos'
            delay(15);                       // waits 15ms for the servo to reach the position
        }
        for(pos = 180; pos>=1; pos-=1)  {
            myservo.write(pos);              // tell servo to go to position in variable 'pos'
            delay(15);                       // waits 15ms for the servo to reach the position
        }
	}
}