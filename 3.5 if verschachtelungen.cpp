#include <iostream>

using namespace std;

int main()
{
	
	int anzahlspieler;
	char auswahl;
	
		cout << " anzahl spieler eingeben:\n";
		cin  >> anzahlspieler;
	
	if (anzahlspieler == 1)
	{
		cout << "singleplayer:\n" << "du spielst gegen den pc.\n";
	}
	
	else if (anzahlspieler == 2) 
	
	/*falls dieser if codeblock zutrifft,
	dann wird eine weitere if bedingung innerhalb dieses blocks gestartet.
	dies nennt man verschachtelung.(nicht vergessen diese if bedingung muss
	die unten stehende if bedingung umschließen, da sie ja zu dieser dazu gehört.*/
	
	{
		cout << "multiplayer:\n" << "(g) gegeneinander? " << "(p)gegen den pc?\n";
		cin  >> auswahl;
		
	if (auswahl == 'g') 
		cout << "du spielst gegen den spieler.\n";
		
	else if (auswahl == 'p')
		cout << "ihr spielt gegen den pc.\n";
		
	else
		cout << "ungueltige eingabe.\n";
	}
	
	else
	{
		cout << "ungueltige eingabe.\n";
	}
	

	return 0;
	
}
