#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup()
{
    Serial.begin(115200);
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(0, 0);
    display.println("<h1>  aK#  </h1>");
    display.setCursor(0, 16);
    display.println("<p>\n  Print to OLED</br>\n  display using</br>\n  libraries by </br>\n  Adafruit\n</p>");
    display.display();
    delay(2000);
}
void loop()
{
}
