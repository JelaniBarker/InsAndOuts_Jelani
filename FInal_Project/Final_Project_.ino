
//READS ANALOG SENSOR AND WRITES VALUE TO SERIAL PORT 
const int buttonPin = 2;
const int LED1 = 9;
const int LED2 = 10;
const int LED3 = 11;
const int POT = A0;
const int Val = 0; 

int buttonState = 0; //track button sensor value  
int POTval = 0; // track potentiometer sensor value

void setup() {
  pinMode (LED1,OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (buttonPin, INPUT); // set pin as input
  pinMode (POT, INPUT); //set pin as input

  Serial.begin(9600); 
}

void loop() {
  buttonState = digitalRead(buttonPin); //read sensor and assign to BUTTONval
  delay(10);

//condisitonal statement
if (buttonState == HIGH) {
  digitalWrite(LED1, HIGH);
  delay (20);
  digitalWrite(LED1, LOW);
  delay (20);
  digitalWrite(LED2, HIGH);
  delay (20);
  digitalWrite(LED2, LOW);
  delay (20);
  digitalWrite(LED3, HIGH);
  delay (20);
  digitalWrite(LED3, LOW);
  delay (20);
   digitalWrite(LED1, HIGH);
  delay (20);
  digitalWrite(LED1, LOW);
  delay (20);
  digitalWrite(LED1, HIGH);
  delay (20);
  digitalWrite(LED1, LOW);
  delay (20);
  digitalWrite(LED2, HIGH);
  delay (20);
  digitalWrite(LED2, LOW);
  delay (20);
  digitalWrite(LED1, HIGH);
  delay (20);
  digitalWrite(LED1, HIGH);
  delay (20);
  digitalWrite(LED2, HIGH);
  delay (20);
  digitalWrite(LED2, HIGH);
  delay (20);
  digitalWrite(LED3, HIGH);
  delay (20);
  digitalWrite(LED3, HIGH);
  delay (20);
  digitalWrite(LED1, HIGH);
  delay (20);
  digitalWrite(LED1, HIGH);
  delay (20);
  digitalWrite(LED2, HIGH);
  delay (20);
  digitalWrite(LED2, HIGH);
  delay (20);
  digitalWrite(LED3, HIGH);
  delay (20);
  digitalWrite(LED3, HIGH);
  delay (20);
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
  delay (10);
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
  delay (10);
   
} else {   //otherwise
    digitalWrite(LED1, LOW);      // turn off voltage to LED pin
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  
  }
  POTval = analogRead(POT);
  delay(100);
  POTval = map (POTval, 0, 1023, 2, 255);

  Serial.write(POTval);
  Serial.write(buttonState);


}




  /////////Uncomment Serial.print() OR Serial.write() and not both!//////////////
  
//Serial. println(val); //to send human-readable data to Arduino monitor
//Serial.write(val);  //to send binary data to Processing
