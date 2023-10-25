#include <Arduino.h>
#include "MorseSerie.h"

MorseSerie::MorseSerie():
    Morse(200)
{
    ;
}
void MorseSerie::AfficherPoint() const
{
    Serial.print(".");
}
void MorseSerie::afficherTrait() const
{
    Serial.print("-");
}