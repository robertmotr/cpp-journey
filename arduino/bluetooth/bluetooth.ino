#include <SoftwareSerial.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define WIDTH 128
#define HEIGHT 64

#define RESET 4

SoftwareSerial mySerial(2,3);
Adafruit_SSD1306 display(WIDTH, HEIGHT, &Wire, RESET);
int ledpin=13;
void setup()
{
  Wire.begin();
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // 0x3C or 0x3D
    Serial.println("SSD1306 allocation failed");
    while(true) {}
  }
  display.display();
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Hello world");
  display.display();
}
void loop()
{
  int i;
  if (mySerial.available() > 0)
  {
    i=mySerial.read();
    Serial.println(i, BIN);
    if(i==1)
    {
      digitalWrite(ledpin,1);
    }
    if(i==0)
    {
      digitalWrite(ledpin,0);
    }
  }
}
