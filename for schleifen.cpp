#include <iostream>

using namespace std;

int main()
{
	
	int rundenpunkte, rundenanzahl, gesamtpunkte;
	
	cout << "wieviel runden sollen gespielt werden?`\n";
	cin  >> rundenanzahl;
	
	for (int i = 0; i < rundenanzahl; i++)
	
	/*in den klammern der for schleife stehen sozusagen die bedingungen,
	diese bestehen aus drei teilen. erstens der initialisierungsteil, danach der bedingungsteil
	und als letztes der aktionsteil.*/
	
	{
	cout << "runde " << i + 1 << " laeuft\n";
	cout << "erreichte punkte in dieser runde eingeben: \n";
	cin  >> rundenpunkte;
	
	gesamtpunkte += rundenpunkte;
	
	cout << "zwichenpunkte: " << gesamtpunkte << endl << endl;
	}
	
	cout << "insgesamt wurden " << gesamtpunkte << " punkte nach " << rundenanzahl << " runden erreicht.\n";
	
	return 0;
}
