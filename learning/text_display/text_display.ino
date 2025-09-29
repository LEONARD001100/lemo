#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_LENGTH 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_LENGTH,&Wire,OLED_RESET);

void setup() {

display.begin(SSD1306_SWITCHCAPVCC,0x3C);
display.clearDisplay();
display.setTextSize(2);
display.setTextColor(SSD1306_WHITE);
display.setCursor(0,0);
display.println("HI");
display.display();

}

void loop() {
  // put your main code here, to run repeatedly:
}
