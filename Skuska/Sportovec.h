#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class Sportovec
{
private:
	string priezvisko;
	string meno;
	int sekundy = 0;
	int minuty = 0;
public:
	Sportovec(string priezvisko, string meno, int minuty, int sekundy);
	string getPriezvisko() { return this->priezvisko; }
	string getMeno() { return this->meno; }
	int getMinuty() { return this->minuty; }
	int getSekundy() { return this->sekundy; }
	void vypis();
	~Sportovec();
};

