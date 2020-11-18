/*
  Please ignore this example
*/

#define PIN_LED LED_BUILTIN

void setup()
{
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_LED, HIGH);
  delay(500);
  digitalWrite(PIN_LED, LOW );
  delay(500);
}
