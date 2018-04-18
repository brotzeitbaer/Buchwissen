#include <iostream>

using namespace std;

int main()
{
	
	char auswahl;
	
	cout << "(j)eder gegen jeden oder (t)eamspiel?\n";
	cin  >> auswahl;
	
	if ((auswahl == 'j') || (auswahl == 'J')) // hier KEIN semikolon verwenden.
	{
	cout << "jeder gegen jeden\n";
	}
	
	else if ((auswahl == 't') || (auswahl == 'T')) 
	
	/* die zwei "||" sind logische operatoren und
	bedeuten "oder". die klammern in den klammern sind eigentlich hier nicht nötig aber
	helfen zu verstehen was zuerst ausgeführt wird. */
	
	{
	cout << "teamspiel\n";
	}
	
	else
	{
		cout << "ungueltige eingabe\n";
	}
	
	return 0;
	// ein anderer logischer operator wäre "&&" und heißst "und".
}
