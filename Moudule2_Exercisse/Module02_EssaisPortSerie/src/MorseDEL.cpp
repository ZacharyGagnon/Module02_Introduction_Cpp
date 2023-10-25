#include <Arduino.h>
#include "MorseDEL.h"

MorseDEL::MorseDEL(int p_pinDEL):
    m_pinDEL(p_pinDEL), Morse(200)
{
    pinMode(m_pinDEL, OUTPUT);
}
void MorseDEL::AfficherPoint() const
{
    digitalWrite(m_pinDEL, HIGH);
    delay(getDureePoint());
    digitalWrite(m_pinDEL, LOW);
    delay(getDureePoint());
}
void MorseDEL::afficherTrait() const
{
    digitalWrite(m_pinDEL, HIGH);
    delay(getDureePoint() * 3);
    digitalWrite(m_pinDEL, LOW);
    delay(getDureePoint());
}