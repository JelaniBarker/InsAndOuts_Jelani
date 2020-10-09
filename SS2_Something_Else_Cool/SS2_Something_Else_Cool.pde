// Something Else Cool by Jelani

int circle= 500;


void setup(){
  size (700,700);
}

float x, y;


float r= random( 0, 255);
float g= random( 0, 255);
float b= random(0, 255);


void draw() {
  background(245, 204, 800);
  circle(60, 600, 60);
  rect(width/2, height/2, mouseX + 10, mouseY + 10);
  if (circle< width + 100)
  circle= +2;
  else circle= - 100;
}

void keyPressed() {
 stroke(300);
 fill(50, 500, 60);
 rectMode(CENTER);
 rect(mouseX, mouseY, 16, 16);
}
