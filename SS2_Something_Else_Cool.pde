// Something Else Cool by Jelani


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
}

void keyPressed() {
 stroke(300);
 fill(50, 500, 60);
 rectMode(CENTER);
 rect(mouseX, mouseY, 16, 16);
}

// if the mouse in on the left side of the screen, draw a circle on the right side of the screen
