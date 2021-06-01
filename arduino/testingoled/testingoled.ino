#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define WIDTH 128
#define HEIGHT 64

#define RESET 4

Adafruit_SSD1306 display(WIDTH, HEIGHT, &Wire, RESET);

void setup() {
  Serial.begin(9600);
  Wire.begin();
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // 0x3C or 0x3D
    Serial.println("SSD1306 allocation failed");
    while(true) {}
  }
  display.display();
  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("Hello world!"));
  display.display();
}

void loop() {
  }
