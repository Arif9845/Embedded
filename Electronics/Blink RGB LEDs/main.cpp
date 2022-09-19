#include <Arduino.h>
#define RedLed 4
#define GreenLed 2
#define BlueLed 13

void setup()
{
  pinMode(RedLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  pinMode(BlueLed, OUTPUT);

  // put your setup code here, to run once:
}

void loop()
{

  digitalWrite(RedLed, HIGH);
  delay(500);
  digitalWrite(RedLed, LOW);
  delay(500);

  digitalWrite(GreenLed, HIGH);
  delay(500);
  digitalWrite(GreenLed, LOW);
  delay(500);

  digitalWrite(BlueLed, HIGH);
  delay(500);
  digitalWrite(BlueLed, LOW);
  delay(500);

  digitalWrite(BlueLed, HIGH);
  digitalWrite(RedLed, HIGH);
  digitalWrite(GreenLed, HIGH);
  delay(500);
  digitalWrite(BlueLed, LOW);
  digitalWrite(RedLed, LOW);
  digitalWrite(GreenLed, LOW);
  delay(500);

  // put your main code here, to run repeatedly:
}