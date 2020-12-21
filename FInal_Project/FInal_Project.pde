 import processing.serial.*; //import serial library

// Dodge the bad feets by Lani

Serial myPort; // creates object from serial class

int val=0; // creates variable for data coming from serial port
int POTval=0; //variable to track potentiometer value
int buttonState=0; // variabe to track button value


PImage Jelani;

float move= 2.5;
float rectX= 590;
float opacity=0;
float fade = 1;
float imageX = 0;
float imageY = 300;
float r= 255;
float g= 255;
float b= 255;
 
void setup(){
  size(950,750);
Jelani= loadImage("Lani Live.png");
Jelani.resize(450, 450);
textSize(50);
textAlign(TOP, LEFT);



printArray(Serial.list());// this line prints the port list to the console
String portName = Serial.list()[5]; //change to match your port
myPort = new Serial(this, portName, 9600); //initialize serial communication at 9600 baud 
}

void draw() {
  
  if (myPort.available() > 0) { 
    val = myPort.read();
  }
   if (val == 0 || val == 1) { //if serial data is 0 or 1, assign to button
    buttonState = val;
  } else {
    POTval = val; //otherwise, assign to potentiometer
  }
    background (POTval, 0, b);
   
  image(Jelani, imageX, imageY);// character
  
  fill(0, 0, 23);
  text ("BAD FEETS:", 550, 100, 150);
  opacity= opacity+fade;
  if (opacity>255 || opacity< 0) {
    fade= +fade;

}

//ellipse(x, y, width, height);
    rect (rectX, 590, 100, 100, val);
    if (rectX < -200){
      rectX = width;
    } else {
    rectX-= move;
    }
    

  if (buttonState == 1){
    imageY = +300;
   
  }
  
  //print stuff to console so we can see what's what 
    println ("val:" + val);
    println ("POTval:" + POTval);
    println ("buttonState:" + buttonState); 
}

void keyPressed(){
   imageY =+1;
    if (imageY < 100){
  } else {
   imageY = -100;
   
  }
  
}
