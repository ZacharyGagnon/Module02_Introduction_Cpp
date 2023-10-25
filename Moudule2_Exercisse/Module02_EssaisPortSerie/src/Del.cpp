#include <Arduino.h>
#include "Del.h"

Del::Del(const int& pinDEL):
    m_pinDEL(pinDEL)
{
    pinMode(m_pinDEL, OUTPUT);
}

void Del::Allumer() const
{
    digitalWrite(m_pinDEL, HIGH);
    delay(500);
}

void Del::Eteindre() const
{
    digitalWrite(m_pinDEL, LOW);
    delay(500);
}