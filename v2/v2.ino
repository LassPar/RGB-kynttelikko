#include <Adafruit_NeoPixel.h>
#define PIN 6


int red0 = 0;
int yellow0 = 0;
int redrand0 = 105;
int redrand00 = 105;
int jako0 = 0;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin();
  strip.show();
}

void loop() {

    if (redrand0 == redrand00)
    {
      strip.setPixelColor(0, red0, yellow0, 0);
      strip.show();
      delay(random(0, 200));
      redrand00 = random(105);
      jako0 = random(5, 10);
    }

    if (redrand0 < redrand00){
      redrand0 = redrand0 + 1;
    }

    if (redrand0 > redrand00){
      redrand0 = redrand0 - 1;
    }
    
    red0 = 150 + redrand0;
    yellow0 = 50 + redrand0 / jako0;
      for (int i = 0; i<10; i++)
      {
        strip.setPixelColor(0, red0, yellow0, 0);
      }
    strip.show();
    delayMicroseconds(random(50, 3000));
  }

