//week13-5
import processing.sound.*;
SoundFile mySound;
void setup(){
  size(400,400);
  mySound=new SoundFile(this,"Intro Song_Final.mp3");
  mySound.play();
}
void draw(){
}
