#pragma once
#include "Sportovec.h"
#include <fstream>
#include <iostream>
using namespace std;
class ZoznamSportovcov
{
private:
	Sportovec** zoznam = nullptr;
	int pocetSportovcov = 0;
public:
	ZoznamSportovcov(int pocetSportovcov);
	void pridajSportovcov(string nazovSuboru);
	void usporiadaj();
	void vypis();
	~ZoznamSportovcov();
private:
	void vymen(Sportovec& a, Sportovec& b);
};

