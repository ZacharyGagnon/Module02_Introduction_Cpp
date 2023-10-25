#include <Arduino.h>
#include "PassageParametres.h"
#include "Flasher.h"
#include "Del.h"
#include "Morse.h"
#include "MorseSerie.h"
#include "MorseDEL.h"

Flasher flasher(LED_BUILTIN, 500);
Del del (LED_BUILTIN);
void setup() 
{
	Serial.end();
	Serial.begin(9600);

	// int valeur1 = 42;
	// int valeur2 = 13;

	// Serial.println(42);
	// Serial.println("hello world");
	// Serial.println(42, HEX);
	// Serial.println("0x" + String(42, HEX));
	// Serial.println("int valeur1 (int * : 0x"+ String((int)&valeur1, HEX) + ") = " + String(valeur1));
	// Serial.println("int valeur2 (int * : 0x"+ String((int)&valeur2, HEX) + ") = " + String(valeur2));

	// Serial.println("Appel de PassageParametres1(valeur1, valeur2, &valeur1);");
	// PassageDeParametre1(valeur1, valeur2, &valeur1);

	// int *reference = &valeur1;
	// int *pointeur = &valeur2;
	// int **pointeurPointeur = &pointeur;
	// Serial.println(valeur1);
	// Serial.println("int *reference (int : 0x"+ String((int)(&reference), HEX) + ") adresse : 0x " + String((int)reference, HEX) + " = " + String(*reference));
	// Serial.println("int **pointeurPointeur (int : 0x"+ String((int)(&pointeurPointeur), HEX) + ") adresse : 0x " + String((int)pointeurPointeur, HEX) + "->" + String((int)*pointeurPointeur,HEX) + " = " + String(**pointeurPointeur));
	// Serial.println("Appel de PassageParametres2(valeur1, valeur2);");
	// PassageDeParametre2(reference, pointeurPointeur);
	// Serial.println("int *reference (int : 0x"+ String((int)(&reference), HEX) + ") adresse : 0x " + String((int)reference, HEX) + " = " + String(*reference));
	// Serial.println("int **pointeurPointeur (int : 0x"+ String((int)(&pointeurPointeur), HEX) + ") adresse : 0x " + String((int)pointeurPointeur, HEX) + "->" + String((int)*pointeurPointeur,HEX) + " = " + String(**pointeurPointeur));

	// Flasher flaserDuSetup(LED_BUILTIN, 500);
	// flasher = flaserDuSetup;

	// PassgeDeParametreParCopie(flasher);
	// PassgeDeParametreParReference(flasher);
	// PassgeDeParametreParPointeur(&flasher);

	Morse* morse;
	MorseSerie* morseSerie = new MorseSerie();
	morse = morseSerie;
	morse->afficherSOS();
	MorseDEL* morseDEL = new MorseDEL(LED_BUILTIN);
	morse = morseDEL;
	morse->afficherSOS();
}

void loop() 
{
	//flasher.FaireClignoter(5);
	// del.Allumer();
	// del.Eteindre();
}

