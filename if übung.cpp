#include <iostream>

using namespace std;

int main()
{
	
	int highscore = 32760;
	int punktespieler = 0;
	
	cout << "momentaner highscore: " << highscore << endl << endl;
	cout << "wieviel punkte wurden erreicht?\n";
	cin >> punktespieler;
	
	if (punktespieler < highscore) // nach den runden klammern einer if bedingung darf kein semikolon folgen.
	cout << "kein neuer highscore\n";
	
	if (punktespieler > highscore)
	cout << "neuer highscore!\ndeine punktzahl: " << punktespieler << endl;
	
	if (punktespieler == highscore)
	cout << "das war knapp\n "; 
	
	return 0;
}
