
#include "someLib.h"

void flashLed(uint8_t led)
{
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW );
  delay(500);
}

void setLed(uint8_t led)
{
  pinMode(led, OUTPUT);
}
