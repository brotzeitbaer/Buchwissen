#include <iostream>

using namespace std;

int main()
{
	
	enum raumschifftyp {jaeger, transporter, minenleger, bomber}; /* eine m�glichkeit eine konstante zu erzeugen.
	mit dem befehl "enum". Hierbei ist j�ger = 0, transporter = 1 usw.*/
	raumschifftyp spieler1 = transporter;
	
	/* man k�nnte auch beispielsweise "transporter = 3" schreiben dann w�re transporter = 3, minenleger = 4 usw.*/
	
	const int ianzahl_level = 8;  /* "const" f�r konstenten.
	damit legt man einmal einen wert fest und kann diesen sp�ter nicht mehr �ndern.
	wird benutzt damit man einen wichtigen wert, wie z.b.:
	die anzahl der level nicht sp�ter irgendwo versehentlich �ndert.*/
	
	cout << ianzahl_level << endl;
	

return 0;
	
} /* es gibt noch eine dritte m�glichkeit eine konstante zu erzeugen mit
dem pr�prozessor befehl "#define anzahl_level 10", diese ist aber weniger geeignet
als die anderen beiden, siehe buch 2.7.*/
