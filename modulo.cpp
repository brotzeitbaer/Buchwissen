#include <iostream>

using namespace std;

int main()
{
	
	int zahl;
	int divisor;
	
	cout << "bitte zahl eingeben: \n";
	cin  >> zahl;
	
	cout << "bitte divisor eingeben: \n";
	cin  >> divisor;
	
	//wie man hier sieht, kann man auch direkt beim cout rechnungen durchführen
	cout << "das ergebnis lautet: " << zahl/divisor << endl << endl;
	cout << "der rest lautet: "     << zahl%divisor << endl;
	
	return 0;
	
}
