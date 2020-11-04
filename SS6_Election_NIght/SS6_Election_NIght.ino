 //Election Night Coverage by Jelani B.
 
 // sets up constant integer variables for pins (will not change)
const int buttonPin = 2;     // creates variable called buttonPin and assigns value of 2
const int LED1= 13;       // creates variable called LED and assigns value of 13
const int LED2= 12;
const int LED3= 11;
const int LED4= 10;
const int LED5= 9;
const int LED6= 8;
      

// sets up integer variable that will change over time
int buttonState = 0; // creates variable to track buttonState, assigns initial value of 0



void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);  // initialize LED pin as an output.
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(buttonPin, INPUT);  // initialize pushbutton pin as an input.
}



void loop() {
   buttonState = digitalRead(buttonPin);    // read the state of the pushbutton value
   delay (10); //small delay for debouncing, to increase accuracy

  // conditional statement
  if (buttonState == HIGH) { // if button is pressed (voltage received on pin 2)
  // send voltage to LED pin
  digitalWrite(LED1, HIGH);
  delay (200);
  digitalWrite(LED1, LOW);
  delay (200);
  digitalWrite(LED2, HIGH);
  delay (200);
  digitalWrite(LED2, LOW);
  delay (200);
  digitalWrite(LED3, HIGH);
  delay (200);
  digitalWrite(LED3, LOW);
  delay (200);
   digitalWrite(LED4, HIGH);
  delay (200);
  digitalWrite(LED4, LOW);
  delay (200);
  digitalWrite(LED5, HIGH);
  delay (200);
  digitalWrite(LED5, LOW);
  delay (200);
  digitalWrite(LED6, HIGH);
  delay (200);
  digitalWrite(LED6, LOW);
  delay (200);
  digitalWrite(LED1, HIGH);
  delay (200);
  digitalWrite(LED1, HIGH);
  delay (200);
  digitalWrite(LED2, HIGH);
  delay (200);
  digitalWrite(LED2, HIGH);
  delay (200);
  digitalWrite(LED3, HIGH);
  delay (200);
  digitalWrite(LED3, HIGH);
  delay (200);
  digitalWrite(LED4, HIGH);
  delay (200);
  digitalWrite(LED4, HIGH);
  delay (200);
  digitalWrite(LED5, HIGH);
  delay (200);
  digitalWrite(LED5, HIGH);
  delay (200);
  digitalWrite(LED6, HIGH);
  delay (200);
  digitalWrite(LED6, HIGH);
  delay (200);
  digitalWrite(LED1, HIGH);
  delay (100);
  digitalWrite(LED1, LOW);
  delay (100);
  digitalWrite(LED2, HIGH);
  delay (100);
  digitalWrite(LED2, LOW);
  delay (100);
  digitalWrite(LED3, HIGH);
  delay (100);
  digitalWrite(LED3, LOW);
  delay (100);
  digitalWrite(LED4, HIGH);
  delay (100);
  digitalWrite(LED4, LOW);
  delay (100);
  digitalWrite(LED5, HIGH);
  delay (100);
  digitalWrite(LED5, LOW);
  delay (100);
  digitalWrite(LED6, HIGH);
  delay (100);
  digitalWrite(LED6, LOW);
  delay (100);
  
  
  
  } else {   //otherwise
    digitalWrite(LED1, LOW);      // turn off voltage to LED pin
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
  }
}
