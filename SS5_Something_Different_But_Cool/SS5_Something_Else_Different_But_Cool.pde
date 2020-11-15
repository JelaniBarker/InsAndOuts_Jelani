float move= 2;
float mouseX = 2;
float mouseY = 2;



void setup() {
  size (500,500);
}

void draw() {
  background (255);
  //star function 
  star(50, 200, 65, 170, 230, 180);
  star(200, 150, 33, 200, 45, 63);
  star(11, 88, 300, 80, 95, 120);
  
  //stripe fuction
  stripe(22, 10, 0, 64, 200, 16);
  stripe(22, 10, 0, 23, 75, 185);
  stripe(22, 10, 0, 300, 50, 33);
  
  fill(25, 45, 200);
  beginShape();
  vertex(0, -50);
  vertex(14, -20);
  vertex(47, -15);
  vertex(23, 7);
  vertex(29, 40);
  vertex(0, 25);
  vertex(-29, 40);
  vertex(-23, 7);
  vertex(-47, -15);
  vertex(-14, -20);
  endShape(CLOSE);

}


void star(int x, int y, int z, int r, int g, int b) {
  fill (r, g, b);
  triangle(x, y, x+50, y, y+25, z);
  
}

void stripe(int x, int y, int z, int r, int g, int b) {
triangle( 45, 45, 90, x+10, y, z+80);
triangle(45, 65, 90, x+45, y, x+25);
triangle(45, 85, 90, x+55, y, x+75);

 }
void keyPressed (){
  if (mouseX <width/2){
    fill(25, 200, 75);
    rect(0, 0, width/2, height);
  
  }
}
