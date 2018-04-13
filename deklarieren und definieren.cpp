#include <iostream>

using namespace std;

int main (void)
{
	
	// Variablen
	
	int lebensenergie; // variable deklarieren (einen namen geben)
	
	lebensenergie = 100; // variable definieren (einen wert zuweisen)
	
	cout << "lebensenergie des spielers: " << lebensenergie << endl;
	
	int  signed temparatur = -18; /* das "signed" zeichen bewirgt, das die variable "int" auch negative zahlen nutzt.
	int beinhaltet 256 zahlen, wenn man auch negative zahlen dazu nimmt,
	dann geht int von -127 bis 128.*/
	int unsigned punktestand = 20; /* wenn man stattdessen unsigned nimmt dann geht int von 0 bis 256.*/

	int iflag = 10;
	float fbewegen = 12;
	char cspieler = 'k'; // bei char gehört immer ein "'" vor und nach dem zeichen.
	bool baktivatet = true; // indem man vor den variablennamen den anfangsbuchstaben des variablentyps schreibt, weis man später um welche variable es sich handelt.


	return 0;	
}
