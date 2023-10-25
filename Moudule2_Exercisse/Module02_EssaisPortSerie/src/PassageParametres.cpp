#include "PassageParametres.h"
#include <Arduino.h>

void PassageDeParametre1(int p_v1, int &p_r1, int *p_p1)
{
	Serial.println("int p_v1 (int * : 0x"+ String((int)(&p_v1), HEX) + ") = " + String(p_v1));
	Serial.println("int &p_r1 (int * : 0x"+ String((int)(&p_r1), HEX) + ") = " + String(p_r1));
	Serial.println("int *p_p1 (int ** : 0x"+ String((int)(&p_p1), HEX) + ") adresse : 0x " + String((int)p_p1, HEX) + " = " + String(*p_p1));
}
void PassageDeParametre2(int *&p_pr1, int **p_pp1)
{
    p_pr1 = new int(85);
    *p_pp1 = new int(170);
}

void PassgeDeParametreParCopie(Flasher p_flasher)
{
	Serial.println("PassgeDeParametreParCopie(Flasher p_flasher) (0x" + String((int)&p_flasher, HEX) + ")");
}

void PassgeDeParametreParReference(Flasher &p_flasher)
{
	Serial.println("PassgeDeParametreParReference(Flasher &p_flasher) (0x" + String((int)&p_flasher, HEX) + ")");
}

void PassgeDeParametreParPointeur(Flasher *p_flasher)
{
	Serial.println("PassgeDeParametreParPointeur(Flasher *p_flasher) (0x" + String((int)p_flasher, HEX) + ")");
}