#include <iostream>

using namespace std;

int main()
{
	int zahl = 0;
	int divisor = 0;

	cout << "Zahl eingeben: " << endl;
	cin >> zahl;

	cout << "Divisor eingeben: " << divisor << endl;
	cin >> divisor;

	//Die if Schleife dient hier nur dazu, um zu verhindern dass durch null geteilt wird.

	if (divisor == 0)
	{
		cout << "Falsche Eingabe" << endl;
	}
	else
	{  //Wenn man den übriggebliebenen Rest anzeigen möchte, dann sieht es folgendermaßen aus:

		cout << "Ergebnis: " << zahl / divisor << endl;
		cout << "Rest: " << zahl % divisor << endl;
	}

	return 0;

}
