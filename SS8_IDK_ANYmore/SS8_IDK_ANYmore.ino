
//////////////////////////////////////////////////////////////////////////////////////////
/*
   Pair with Processing motor sketch, to control servo with Processing interface.
   For more info on servos, see Adafruit Arduino - Lesson 14. Sweep
   https://learn.adafruit.com/adafruit-arduino-lesson-14-servo-motors/overview
*/
//////////////////////////////////////////////////////////////////////////////////////////


#include <Servo.h>  //include Arduino Servo library

Servo servo;  //creates new Servo object called servo


const int SERVOPIN = 3;
int angle = 0;   // Tracks servo position in degrees
int val = 0; // Tracks incoming value from Serial port
const int LED1= 11;
const int LED2= 10;
const int LED3= 9;
const int buttonPin = 2;
int buttonState = 0; // creates variable to track buttonState, assigns initial value of 0

void setup() {
  servo.attach(SERVOPIN); //Specifies pin as output for servo
  Serial.begin(9600); // Start serial communication at 9600 bps
  pinMode(LED1, OUTPUT);  // initialize LED pin as an output.
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600); // start serial communication at 9600 bps
}


void loop() {
  if (Serial.available()) { // If data is available to read
    val = Serial.read(); // read it and store it in val
  }
  if (val < 255) { //If val is less than 255
    servo.write(val);  //position of servo is val
    delay(15);
  }
 
  else if (val == 255) { //else if val is 255 do a motor sweep

    // scan from 0 to 180 degrees
    for (angle = 0; angle < 180; angle++)
    {
      servo.write(angle);
      delay(15);
    }
    // scan back from 180 to 0 degrees
    for (angle = 180; angle > 0; angle--)
    {
      servo.write(angle);
      delay(15);
    }
    val = 0; //reset val;
    
  }

  if (buttonState == HIGH) { // if button is pressed (voltage received on pin 2)
  // send voltage to LED pin
  digitalWrite(LED1, HIGH);
  delay (10);
  digitalWrite(LED1, LOW);
  delay (10);
  digitalWrite(LED2, HIGH);
  delay (10);
  digitalWrite(LED2, LOW);
  delay (10);
  digitalWrite(LED3, HIGH);
  delay (10);
  digitalWrite(LED3, LOW);

  } else {  //otherwise 
    digitalWrite(LED1, LOW);      // turn off voltage to LED pin
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
}
