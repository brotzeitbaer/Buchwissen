#include <iostream>

using namespace std;

int main()
{
	
	int auswahl = 0;
	
	/*die while schleife wird so lange ausgeführt bis die zahl drei eingegeben wird,
	danach beendet sich die schleife.*/
	while (auswahl != 3)
	{
	cout << "\nmenue:\n"
		 << "------\n"
		 << "1: spiel starten\n"
		 << "2: optionen\n"
		 << "3: spiel verlassen\n\n";
	cin  >> auswahl;
		 
	if      (auswahl == 1)
	{
	cout << "\nspiel wird gestartet\n";
	}
	
	else if (auswahl == 2)
	{
	cout << "\noptionen\n";
	}
	
	else if (auswahl == 3)
	{
	cout << "\ntschuess\n\n\n";
	}
	
	else
	{
	cout << "\nungueltige eingabe\n";
	}
	}
	return 0;
	
}
