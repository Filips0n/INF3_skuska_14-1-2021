#include "Sportovec.h"

Sportovec::Sportovec(string priezvisko, string meno, int minuty, int sekundy)
{
	this->priezvisko = priezvisko;
	this->meno = meno;
	this->minuty = minuty;
	this->sekundy = sekundy;
}

void Sportovec::vypis()
{
	cout << priezvisko << " " << meno << " "  << setw(2) << setfill('0') << minuty << ":" << setw(2) << setfill('0') << sekundy << endl;
}

Sportovec::~Sportovec()
{
}
