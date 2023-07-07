#include <iostream>
#include <fstream>
#include <string>
#include <ctime>        
#include <cstdlib>
#include "ZoznamSportovcov.h"
using namespace std;

int main(int argc, char* argv[]) {
	srand(unsigned(time(NULL)));
	cout << "Zadajte nazov suboru: " << endl;
	string nazovSuboru;
	cin >> nazovSuboru;
	cout << endl;
	string line;
	ifstream input(nazovSuboru);
	int pocetSportovcov = 0;
	while (getline(input, line)) pocetSportovcov++;
	ZoznamSportovcov zoznam(pocetSportovcov);
	zoznam.pridajSportovcov(nazovSuboru);
	zoznam.usporiadaj();
	zoznam.vypis();
	return 0;
}