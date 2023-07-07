#include "ZoznamSportovcov.h"

ZoznamSportovcov::ZoznamSportovcov(int pocetSportovcov)
{
	this->pocetSportovcov = pocetSportovcov;
	this->zoznam = new Sportovec * [pocetSportovcov];
}

void ZoznamSportovcov::pridajSportovcov(string nazovSuboru)
{
	string meno;
	string priezvisko;
    int minuty = 0;
    int sekundy = 0;
	ifstream inputSubor(nazovSuboru);
	if (inputSubor.is_open()) {
		int index = 0;
		while (inputSubor >> priezvisko >> meno) {
            sekundy = rand() % 20 + 61;
            minuty = sekundy / 60;
            sekundy -= 60 * minuty;
			zoznam[index] = new Sportovec(priezvisko, meno, minuty, sekundy);
			index++;
		}
	}
	inputSubor.close();
}

void ZoznamSportovcov::usporiadaj()
{
    for (int i = 0; i < pocetSportovcov - 1; i++)
    {
        for (int j = 0; j < pocetSportovcov - i - 1; j++)
        {
            if (zoznam[j]->getMinuty() > zoznam[j + 1]->getMinuty() || ((zoznam[j]->getMinuty() == zoznam[j + 1]->getMinuty()) && (zoznam[j]->getSekundy() > zoznam[j + 1]->getSekundy())))
            {
                vymen(*zoznam[j], *zoznam[j + 1]);
            }
        }
    }
}

void ZoznamSportovcov::vypis()
{
    cout << "Priezvisko Meno MM:SS" << endl << "--------------------" << endl;
    for (int i = 0; i < pocetSportovcov; i++)
    {
        zoznam[i]->vypis();
    }
}

ZoznamSportovcov::~ZoznamSportovcov()
{
    for (int i = 0; i < pocetSportovcov; i++)
    {
        delete zoznam[i];
    }
    delete[] zoznam;
    zoznam = nullptr;
}

void ZoznamSportovcov::vymen(Sportovec& a, Sportovec& b)
{
    Sportovec tmp = a;
    a = b;
    b = tmp;
}
