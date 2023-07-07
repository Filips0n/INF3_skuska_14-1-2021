#include "Pole.h"

void Pole::pripocitaj(int hodnota)
{
    for (int i = 0; i < this->aPocet; i++)
    {
        if (this->aPole[i] == 0)
        {
            this->aPole[i] += hodnota;
        }
    }
}

