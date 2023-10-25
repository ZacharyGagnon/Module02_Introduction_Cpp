#pragma once
#include "Flasher.h"

void PassageDeParametre1(int p_v1, int &p_r1, int *p_p1);
void PassageDeParametre2(int *&p_pr1, int **p_pp1);
void PassgeDeParametreParCopie(Flasher p_flasher);
void PassgeDeParametreParReference(Flasher &p_flasher);
void PassgeDeParametreParPointeur(Flasher *p_flasher);