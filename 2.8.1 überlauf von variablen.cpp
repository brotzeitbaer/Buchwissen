#include <iostream>

using namespace std;

int main()
{
	
	unsigned short ueberlauf = 65535; /* ein short hat 2 bytes,
	(256 * 156 = 65535), wenn man man nun eins dazu zählt,
	dann fängt der wert wieder bei 0 an ( durch unsigned).
	wenn man nun davon wieder 10 runter zählt,
	geht es bis zur 0 und fängt wieder von der 65535 an runter zu zählen.*/
	
	cout << "vor dem ueberlauf: " << ueberlauf << endl;
	
	ueberlauf++;
	cout << "nach dem ueberlauf: " << ueberlauf << endl;
	
	ueberlauf -= 10;
	cout << "und zurueck: " << ueberlauf << endl;
	
	return 0;
	
} /* 1 byte = 8 bit
     2 byte = 16 bit usw.
     (siehe buch kapitel 2.8.1.*/
