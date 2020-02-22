#include <Arduino.h>

int i = 1; 

void setup()
{
  // initialize serial communication at 115200 bits per second:
  // 11
  Serial.begin(9600);
}

void loop()
{
  Serial.println(i++);
  delay(1); // delay in between reads for stability
}