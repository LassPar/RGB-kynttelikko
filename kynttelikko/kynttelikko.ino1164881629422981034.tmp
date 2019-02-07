#include <Adafruit_NeoPixel.h>
#define PIN 6


int red5 = 0;
int yellow5 = 0;
int redrand = 120;
int redrand1 = 120;
int jako5 = 0;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin();
  strip.show();
}

void loop() {

    if (redrand == redrand1){
      for (int i = 0; i<0; i++)
      {
        strip.setPixelColor(i, red5, yellow5, 0);
      }

      strip.show();
      delay(random(0, 200));
      redrand1 = random(120);
      jako5 = random(5, 10);
    }

    if (redrand < redrand1){
      redrand = redrand + 1;
    }

    if (redrand > redrand1){
      redrand = redrand - 1;
    }
    
    red5 = 135 + redrand;
    yellow5 = 50 + redrand / jako5;
      for (int i = 0; i<0; i++)
      {
        strip.setPixelColor(i, red5, yellow5, 0);
      }
    strip.show();
    delayMicroseconds(random(50, 3000));
  }

