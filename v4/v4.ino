#include <Adafruit_NeoPixel.h>
#define PIN 5


int red0 = 0;
int yellow0 = 0;
int redrand0 = 105;
int redrand00 = 105;
int jako0 = 0;
int dsm0 = 0;
unsigned long lastdsm0 = 0;
int ds0 = 0;
unsigned long lastds0 = 0;

int red1 = 0;
int yellow1 = 0;
int redrand1 = 105;
int redrand11 = 105;
int jako1 = 0;
int dsm1 = 0;
unsigned long lastdsm1 = 0;
int ds1 = 0;
unsigned long lastds1 = 0;

int red2 = 0;
int yellow2 = 0;
int redrand2 = 105;
int redrand22 = 105;
int jako2 = 0;
int dsm2 = 0;
unsigned long lastdsm2 = 0;
int ds2 = 0;
unsigned long lastds2 = 0;

int red3 = 0;
int yellow3 = 0;
int redrand3 = 105;
int redrand33 = 105;
int jako3 = 0;
int dsm3 = 0;
unsigned long lastdsm3 = 0;
int ds3 = 0;
unsigned long lastds3 = 0;

int red4 = 0;
int yellow4 = 0;
int redrand4 = 105;
int redrand44 = 105;
int jako4 = 0;
int dsm4 = 0;
unsigned long lastdsm4 = 0;
int ds4 = 0;
unsigned long lastds4 = 0;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin();
  strip.show();
  dsm0 = random(50, 5000);
  ds0 = random(0, 200);
  dsm1 = random(50, 5000);
  ds1 = random(0, 200);
}

void loop() 
{
//********************************************************************************************
  if (micros() - lastdsm0 >= dsm0)
  {
    lastdsm0 = micros();
    dsm0 = random(50, 3000);
    if (redrand0 == redrand00)
    {
      if (millis() - lastds0 >= ds0)
      {
      lastds0 = millis();
        strip.setPixelColor(0, red0, yellow0, 1);
        strip.setPixelColor(1, red0, yellow0, 1);
        strip.show();
        ds0 = random(50, 300);
        //delay(random(3, 200));
        redrand00 = random(105);
        jako0 = random(5, 10);
      }
    }
    if (redrand0 < redrand00)
    {
      redrand0 = redrand0 + 1;
    }
    if (redrand0 > redrand00)
    {
      redrand0 = redrand0 - 1;
    }
    red0 = 150 + redrand0;
    yellow0 = 50 + redrand0 / jako0;
    strip.setPixelColor(0, red0, yellow0, 1);
    strip.setPixelColor(1, red0, yellow0, 1);
    strip.show();
  }
//********************************************************************************************

//********************************************************************************************
  if (micros() - lastdsm1 >= dsm1)
  {
    lastdsm1 = micros();
    dsm1 = random(50, 3000);
    if (redrand1 == redrand11)
    {
      if (millis() - lastds1 >= ds1)
      {
      lastds1 = millis();
        strip.setPixelColor(2, red1, yellow1, 1);
        strip.setPixelColor(3, red1, yellow1, 1);
        strip.show();
        ds1 = random(50, 300);
        //delay(random(3, 200));
        redrand11 = random(105);
        jako1 = random(5, 10);
      }
    }
    if (redrand1 < redrand11)
    {
      redrand1 = redrand1 + 1;
    }
    if (redrand1 > redrand11)
    {
      redrand1 = redrand1 - 1;
    }
    red1 = 150 + redrand1;
    yellow1 = 50 + redrand1 / jako1;
        strip.setPixelColor(2, red1, yellow1, 1);
        strip.setPixelColor(3, red1, yellow1, 1);
    strip.show();
  }
//********************************************************************************************

//********************************************************************************************
  if (micros() - lastdsm2 >= dsm2)
  {
    lastdsm2 = micros();
    dsm2 = random(50, 3000);
    if (redrand2 == redrand22)
    {
      if (millis() - lastds2 >= ds2)
      {
      lastds2 = millis();
        strip.setPixelColor(4, red2, yellow2, 1);
        strip.setPixelColor(5, red2, yellow2, 1);
        strip.show();
        ds2 = random(50, 300);
        //delay(random(3, 200));
        redrand22 = random(105);
        jako2 = random(5, 10);
      }
    }
    if (redrand2 < redrand22)
    {
      redrand2 = redrand2 + 1;
    }
    if (redrand2 > redrand22)
    {
      redrand2 = redrand2 - 1;
    }
    red2 = 150 + redrand2;
    yellow2 = 50 + redrand2 / jako2;
        strip.setPixelColor(4, red2, yellow2, 1);
        strip.setPixelColor(5, red2, yellow2, 1);
    strip.show();
  }
//********************************************************************************************

//********************************************************************************************
  if (micros() - lastdsm3 >= dsm3)
  {
    lastdsm3 = micros();
    dsm3 = random(50, 3000);
    if (redrand3 == redrand33)
    {
      if (millis() - lastds3 >= ds3)
      {
      lastds3 = millis();
        strip.setPixelColor(6, red3, yellow3, 1);
        strip.setPixelColor(7, red3, yellow3, 1);
        strip.show();
        ds3 = random(50, 300);
        //delay(random(3, 200));
        redrand33 = random(105);
        jako3 = random(5, 10);
      }
    }
    if (redrand3 < redrand33)
    {
      redrand3 = redrand3 + 1;
    }
    if (redrand3 > redrand33)
    {
      redrand3 = redrand3 - 1;
    }
    red3 = 150 + redrand3;
    yellow3 = 50 + redrand3 / jako3;
        strip.setPixelColor(6, red3, yellow3, 1);
        strip.setPixelColor(7, red3, yellow3, 1);
    strip.show();
  }
//********************************************************************************************

//********************************************************************************************
  if (micros() - lastdsm4 >= dsm4)
  {
    lastdsm4 = micros();
    dsm4 = random(50, 3000);
    if (redrand4 == redrand44)
    {
      if (millis() - lastds4 >= ds0)
      {
      lastds4 = millis();
        strip.setPixelColor(8, red4, yellow4, 1);
        strip.setPixelColor(9, red4, yellow4, 1);
        strip.show();
        ds4 = random(50, 300);
        //delay(random(3, 200));
        redrand44 = random(105);
        jako4 = random(5, 10);
      }
    }
    if (redrand4 < redrand44)
    {
      redrand4 = redrand4 + 1;
    }
    if (redrand4 > redrand44)
    {
      redrand4 = redrand4 - 1;
    }
    red4 = 150 + redrand4;
    yellow4 = 50 + redrand4 / jako4;
        strip.setPixelColor(8, red4, yellow4, 1);
        strip.setPixelColor(9, red4, yellow4, 1);
    strip.show();
  }
//********************************************************************************************
/*
//********************************************************************************************
  if (micros() - lastdsm0 >= dsm0)
  {
    lastdsm0 = micros();
    dsm0 = random(50, 3000);
    if (redrand0 == redrand00)
    {
      if (millis() - lastds0 >= ds0)
      {
      lastds0 = millis();
        strip.setPixelColor(0, red0, yellow0, 0);
        strip.show();
        ds0 = random(50, 300);
        //delay(random(3, 200));
        redrand00 = random(105);
        jako0 = random(5, 10);
      }
    }
    if (redrand0 < redrand00)
    {
      redrand0 = redrand0 + 1;
    }
    if (redrand0 > redrand00)
    {
      redrand0 = redrand0 - 1;
    }
    red0 = 150 + redrand0;
    yellow0 = 50 + redrand0 / jako0;
    strip.setPixelColor(0, red0, yellow0, 0);
    strip.show();
  }
//********************************************************************************************

//********************************************************************************************
  if (micros() - lastdsm0 >= dsm0)
  {
    lastdsm0 = micros();
    dsm0 = random(50, 3000);
    if (redrand0 == redrand00)
    {
      if (millis() - lastds0 >= ds0)
      {
      lastds0 = millis();
        strip.setPixelColor(0, red0, yellow0, 0);
        strip.show();
        ds0 = random(50, 300);
        //delay(random(3, 200));
        redrand00 = random(105);
        jako0 = random(5, 10);
      }
    }
    if (redrand0 < redrand00)
    {
      redrand0 = redrand0 + 1;
    }
    if (redrand0 > redrand00)
    {
      redrand0 = redrand0 - 1;
    }
    red0 = 150 + redrand0;
    yellow0 = 50 + redrand0 / jako0;
    strip.setPixelColor(0, red0, yellow0, 0);
    strip.show();
  }
//********************************************************************************************

//********************************************************************************************
  if (micros() - lastdsm0 >= dsm0)
  {
    lastdsm0 = micros();
    dsm0 = random(50, 3000);
    if (redrand0 == redrand00)
    {
      if (millis() - lastds0 >= ds0)
      {
      lastds0 = millis();
        strip.setPixelColor(0, red0, yellow0, 0);
        strip.show();
        ds0 = random(50, 300);
        //delay(random(3, 200));
        redrand00 = random(105);
        jako0 = random(5, 10);
      }
    }
    if (redrand0 < redrand00)
    {
      redrand0 = redrand0 + 1;
    }
    if (redrand0 > redrand00)
    {
      redrand0 = redrand0 - 1;
    }
    red0 = 150 + redrand0;
    yellow0 = 50 + redrand0 / jako0;
    strip.setPixelColor(0, red0, yellow0, 0);
    strip.show();
  }
//********************************************************************************************

//********************************************************************************************
  if (micros() - lastdsm0 >= dsm0)
  {
    lastdsm0 = micros();
    dsm0 = random(50, 3000);
    if (redrand0 == redrand00)
    {
      if (millis() - lastds0 >= ds0)
      {
      lastds0 = millis();
        strip.setPixelColor(0, red0, yellow0, 0);
        strip.show();
        ds0 = random(50, 300);
        //delay(random(3, 200));
        redrand00 = random(105);
        jako0 = random(5, 10);
      }
    }
    if (redrand0 < redrand00)
    {
      redrand0 = redrand0 + 1;
    }
    if (redrand0 > redrand00)
    {
      redrand0 = redrand0 - 1;
    }
    red0 = 150 + redrand0;
    yellow0 = 50 + redrand0 / jako0;
    strip.setPixelColor(0, red0, yellow0, 0);
    strip.show();
  }
//********************************************************************************************

//********************************************************************************************
  if (micros() - lastdsm0 >= dsm0)
  {
    lastdsm0 = micros();
    dsm0 = random(50, 3000);
    if (redrand0 == redrand00)
    {
      if (millis() - lastds0 >= ds0)
      {
      lastds0 = millis();
        strip.setPixelColor(0, red0, yellow0, 0);
        strip.show();
        ds0 = random(50, 300);
        //delay(random(3, 200));
        redrand00 = random(105);
        jako0 = random(5, 10);
      }
    }
    if (redrand0 < redrand00)
    {
      redrand0 = redrand0 + 1;
    }
    if (redrand0 > redrand00)
    {
      redrand0 = redrand0 - 1;
    }
    red0 = 150 + redrand0;
    yellow0 = 50 + redrand0 / jako0;
    strip.setPixelColor(0, red0, yellow0, 0);
    strip.show();
  }
//********************************************************************************************
*/
}

