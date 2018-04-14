#include <iostream>

using namespace std;

int main()
{
	
	int punkte = 0;
	float faktor = 2.5;
	int gesamtpunkte = 0;
	
	cout << "erreichte punkte eingeben: " << endl;
	cin  >> punkte;
	
	gesamtpunkte = static_cast <int> (punkte*faktor);
	
	/*das sogenannte casten wird verwendet wenn wir z.b. eine kommazahl in einen
	integer umwandeln wollen. dabei wird beim kompilieren einfach alles was nach
	dem komma steht, weggelassen.
	aus 37,5 wird also 37. dies ist die methode die in c++ verwendet wird*/
	
	/*übrigends werden in variablen zuweisungen immer von rechts nach links gemacht,
	d.h. dass zuerst punkte*fakor gerechnet wird, dann in den int gecasted wird,
	dann das ergebnis der variable "gesamtpunkte" zugewiesen wird.*/
	
	cout << "gesamtpunkte: " << gesamtpunkte << endl;
	
	return 0; 
	
} /*die methode die in c verwendet wird sähe so aus:
gesamtpunkte = (int) (punkte*faktor);, doch wir verwenden die methode die in c++ verwendet wird.*/
