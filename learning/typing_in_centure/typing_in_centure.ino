#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define screen_width 128
#define screen_height 64
#define OLED_reset -1


Adafruit_SSD1306 display(screen_width,screen_height,&Wire,OLED_reset);

void setup() {
 display.begin(SSD1306_SWITCHCAPVCC,0x3C);
 display.clearDisplay();
 display.setTextSize(2);
 display.setTextColor(SSD1306_WHITE);

 String msg="HI...";

 for (int i=0;i<msg.length();i++){
  display.clearDisplay();
  String partial=msg.substring(0,i);
  int16_t x1,y1;
  uint16_t w,h;

  display.getTextBounds(partial,0,0,&x1,&y1,&w,&h);
  int x=(display.width()-w)/2;
  int y=(display.height()-h)/2;
  display.setCursor(x,y);
  display.print(partial);
  display.display();
  delay(200);

 }

}

void loop() {
  // put your main code here, to run repeatedly:

}
