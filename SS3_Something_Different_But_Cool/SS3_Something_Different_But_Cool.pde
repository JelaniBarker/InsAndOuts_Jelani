

void setup(){
  size (500,500);
}

float move=1.25;


void draw(){
  background(20, 70, 50);

  for (int i = 0; i < width; i+=30) {
    if (mouseX > i - 15 && mouseX < i + 15 && mouseY > height/2 - 15 && mouseY < height/2 +15) {
      fill (30, 200, 200);
    } else {
      fill (20, 80, 120);
    }
    rect(i, height/2 + 50, 100, 10);
    ellipse(30, 300, 30, i);
    ellipse(i, 30, 20, 20);
  }
   for (int i = 20; i < width; i+=30)
  if (mouseX > i + move)
  move=-move;
}
