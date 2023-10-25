#include <Arduino.h>
#include "Flasher.h"

Flasher::Flasher(int pinDEL, int dureeAllumeeEteinte): 
    m_pinDEL(pinDEL), 
    m_dureeAllumeeEteinte(dureeAllumeeEteinte)
{
    Serial.end();
    Serial.begin(9600);

    Serial.println("Flasher::Flasher(int, int) (0x" + String((int)this, HEX) + ")");
    pinMode(this->m_pinDEL, OUTPUT);
    digitalWrite(this->m_pinDEL, LOW);
}

Flasher::Flasher(const Flasher &p_flasherAcopier):
    m_pinDEL(p_flasherAcopier.m_pinDEL),
    m_dureeAllumeeEteinte(p_flasherAcopier.m_dureeAllumeeEteinte)
{
    Serial.println("Flasher::Flasher(const Flasher &) (0x" + String((int)this, HEX) + ")");
}

Flasher &Flasher::operator=(const Flasher &p_source)
{
    Serial.println("Flasher::operator=(const Flasher &) (0x" + String((int)this, HEX) + ")" + " - Source : (0x" + String((int)&p_source, HEX) + ")");

    this->m_pinDEL = p_source.m_pinDEL;
    this->m_dureeAllumeeEteinte = p_source.m_dureeAllumeeEteinte;

    return *this;
}

void Flasher::FaireClignoter(int p_nombreCycles)
{
    Serial.println("Flasher::FaireClignoter(int p_nombreCycles) (0x" + String((int)this, HEX) + ")");

    for (int i = 0; i < p_nombreCycles; i++)
    {
        digitalWrite(this->m_pinDEL, HIGH);
        delay(this->m_dureeAllumeeEteinte);
        digitalWrite(this->m_pinDEL, LOW);
        delay(this->m_dureeAllumeeEteinte);
    }
}
