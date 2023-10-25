#pragma once

class Del
{
private:
    int m_pinDEL;
public:
    Del(const int& pinDEL);
    void Allumer() const;
    void Eteindre() const;
};

