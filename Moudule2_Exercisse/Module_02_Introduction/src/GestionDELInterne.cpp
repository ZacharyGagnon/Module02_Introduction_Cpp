#include <Arduino.h>
#include <GestionDELInterne.h>

void allumerDELInterne(int p_duree)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(p_duree);
}

void eteindreDELInterne(int p_duree)
{
  digitalWrite(LED_BUILTIN, LOW);
  delay(p_duree);
}

void codeMorseLong()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void codeMorseCourt()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void codeMorseEspace()
{
  digitalWrite(LED_BUILTIN, LOW);
  delay(600);
}

void codeMorseNouveauMot()
{
  digitalWrite(LED_BUILTIN, LOW);
  delay(1200);
}

void codeMorseS()
{
  codeMorseCourt();
  codeMorseCourt();
  codeMorseCourt();
  codeMorseEspace();
}

void codeMorseO()
{
  codeMorseLong();
  codeMorseLong();
  codeMorseLong();
  codeMorseEspace();
}

void AfficherSOSMorse()
{
    codeMorseS();
    codeMorseO();
    codeMorseS();
    codeMorseNouveauMot();
}