//week10_1_bubble_part2
PImage happy1, happy2, happy3;
void setup(){
   size(600,675);
   happy1 = loadImage("happy1.jpg");
   happy2 = loadImage("happy2.jpg");
}
void draw(){
   background(happy1);
   if(mousePressed){
      happy3 = happy2.get(mouseX, mouseY, 60, 60);
      image(happy3, mouseX-30, mouseY-30);
   }
}
