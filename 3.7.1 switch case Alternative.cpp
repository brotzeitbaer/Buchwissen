#include <iostream>

using namespace std;

int main()
{
	char chAuswahl;

	cout << "--------Meneu--------\n" << endl;
	cout << "(S)piel starten\n(O)ptionen\n(C)redits\n(E)xit\n" << endl;
	cin >> chAuswahl;

	switch (chAuswahl)
	{
  
  // Hier jetzt ohne geschweifte Klammern
  
	case ('S'):
	case ('s'):
	cout << "Start\n" << endl;
	break;
	case ('O'):
	case ('o'):
	cout << "Optionen\n" << endl;
	break;
	case ('C'):
	case ('c'):
	cout << "Credits\n" << endl;
	break;
	case ('E'):
	case ('e'):
	cout << "Beenden\n" << endl;
	break;
	default:
	cout << "Falsche Eingabe\n" << endl;
	break;
	}

	cout << "Ende" << endl;
	
	return 0;
	
}
