#pragma once

class Morse
{
private:
    int m_dureePoint;
public:
    Morse(int p_dureePoint);
    virtual void AfficherPoint() const = 0;
    virtual void afficherTrait() const = 0;
    void afficherSOS() const;
    int getDureePoint() const;
};

