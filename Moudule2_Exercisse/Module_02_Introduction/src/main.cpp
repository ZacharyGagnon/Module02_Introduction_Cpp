#include <Arduino.h>
#include <GestionDELInterne.h>
#include <Configuration.h>

void setup() 
{
  pinMode (LED_BUILTIN, OUTPUT);
}

void loop() 
{
  AfficherSOSMorse();
}

