#include <Adafruit_NeoPixel.h>
#define PIN 5

// 0=red, 1=yellow, 2=redrand, 3=redrand0, 4=jako, 5=dsm, 6=ds
int leds[10][7] = 
{
{0, 0, 105, 105, 0, 0, 0},
{0, 0, 105, 105, 0, 0, 0},
{0, 0, 105, 105, 0, 0, 0},
{0, 0, 105, 105, 0, 0, 0},
{0, 0, 105, 105, 0, 0, 0},
{0, 0, 105, 105, 0, 0, 0},
{0, 0, 105, 105, 0, 0, 0},
{0, 0, 105, 105, 0, 0, 0},
{0, 0, 105, 105, 0, 0, 0},
{0, 0, 105, 105, 0, 0, 0}
};

// lastdsm, lastds
unsigned long last_times[10][2] = 
{
{0, 0},
{0, 0},
{0, 0},
{0, 0},
{0, 0},
{0, 0},
{0, 0},
{0, 0},
{0, 0},
{0, 0}
};

int blue = 1;
int min_red = 150;
int min_yellow = 50;
int jakovali[] = {1, 10};
int ds_vali[] = {50, 300};
int dsm_vali[] = {50, 3000};

Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin();
  strip.show();
}

void loop() 
{
  for (int i = 0; i<10; i++)
  {
    valo(i, leds[i], last_times[i]);
  }
}



void valo(int lednum, int led[], unsigned long last_time[])
{
// 0=red, 1=yellow, 2=redrand, 3=redrand0, 4=jako, 5=dsm, 6=ds

  if (micros() - last_time[0] >= led[5])
  {
    last_time[0] = micros();
    led[5] = random(dsm_vali[0], dsm_vali[1]);
    
    if (led[2] == led[3])
    {
      if (millis() - last_time[1] >= led[6])
      {
        last_time[1] = millis();
        //strip.setPixelColor(lednum, led[0], led[1], blue);
        //strip.show();
        led[6] = random(ds_vali[0], ds_vali[1]);
        led[3] = random(255 - min_red);
        led[4] = random(jakovali[0], jakovali[1]);
      }
    }
    
    else if (led[2] < led[3])
    {
      led[2] = led[2] + 1;
    }
    
    else if (led[2] > led[3])
    {
      led[2] = led[2] - 1;
    }
    
    led[0] = min_red + led[2];
    led[1] = min_yellow + led[2] / led[4];
    strip.setPixelColor(lednum, led[0], led[1], blue);
    strip.show();

    for (int j = 0; j<2; j++)
    {
      last_times[lednum][j] = last_time[j];
    }
    
    for (int k = 0; k<10; k++)
    {
      leds[lednum][k] = led[k];
    }
  }
}

