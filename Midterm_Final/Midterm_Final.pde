// Dodge the bad feets by Lani

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
  background(255);
Jelani= loadImage("Lani Live.png");
Jelani.resize(450, 450);
textSize(50);
textAlign(TOP, LEFT);
}

void draw() {
  background(r, g, b);
  image(Jelani, imageX, imageY);// character
  
  fill(240, 75, 23);
  text ("BAD FEETS:", 550, 100, 150);
  opacity= opacity+fade;
  if (opacity>255 || opacity< 0) {
    fade= +fade;

}

//ellipse(x, y, width, height);
    rect (rectX, 590, 100, 100);
    if (rectX < -200){
      rectX = width;
    } else {
    rectX-= move;
    }
    
} void keyPressed(){
  
   imageY =+100;
    if (imageY < 100){
  } else {
   imageY = 100;
  }
  
}

 void mousePressed(){
    r= random (0, 255);  
    g= random (0, 255);
    b= random (0, 255);
    imageY = +300;
}
