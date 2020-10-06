import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class SS4_Something_New extends PApplet {

// Dodge the bad feets by Lani

PImage Jelani;

float opacity=0;
float fade = 1;

public void setup(){
  
  background(255);
Jelani= loadImage("Lani Live.png");
Jelani.resize(450, 450);
textSize(50);
textAlign(TOP, LEFT);
}

public void draw() {
  background(20, 75, 50);
  image(Jelani, 0, 40);
  
  fill(opacity);
  text ("BAD FEETS", 100, 100, 150);
  opacity= opacity+fade;
  if (opacity>255 || opacity< 0) {
    fade= -fade;
}

}
  public void settings() {  size(950,750); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "--present", "--window-color=#666666", "--stop-color=#cccccc", "SS4_Something_New" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
