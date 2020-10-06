// Dodge the bad feets by Lani

PImage Jelani;

float opacity=0;
float fade = 1;

void setup(){
  size(950,750);
  background(255);
Jelani= loadImage("Lani Live.png");
Jelani.resize(450, 450);
textSize(50);
textAlign(TOP, LEFT);
}

void draw() {
  background(20, 75, 50);
  image(Jelani, 0, 40);
  
  fill(opacity);
  text ("BAD FEETS", 100, 100, 150);
  opacity= opacity+fade;
  if (opacity>255 || opacity< 0) {
    fade= -fade;
}

}
