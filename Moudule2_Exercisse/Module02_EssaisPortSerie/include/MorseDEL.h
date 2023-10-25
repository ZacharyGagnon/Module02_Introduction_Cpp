#pragma once
#include "Morse.h"

class MorseDEL : public Morse
{
private:
    int m_pinDEL;
public:
    MorseDEL(int p_pinDEL);
    void AfficherPoint() const;
    void afficherTrait() const;
};