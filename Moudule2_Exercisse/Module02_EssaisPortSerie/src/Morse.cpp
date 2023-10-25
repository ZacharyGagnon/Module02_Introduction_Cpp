#include <Arduino.h>
#include "Morse.h"

Morse::Morse(int p_dureePoint):
    m_dureePoint(p_dureePoint)
{
    ;
}
void Morse::afficherSOS() const
{
    AfficherPoint();
    AfficherPoint();
    AfficherPoint();
    afficherTrait();
    afficherTrait();
    afficherTrait();
    AfficherPoint();
    AfficherPoint();
    AfficherPoint();
}
int Morse::getDureePoint() const
{
    return m_dureePoint;
}