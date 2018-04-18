#include <iostream>

using namespace std;

int main()
{
	
	enum raumschifftyp {jaeger, transporter, minenleger, bomber}; /* eine möglichkeit eine konstante zu erzeugen.
	mit dem befehl "enum". Hierbei ist jäger = 0, transporter = 1 usw.*/
	raumschifftyp spieler1 = transporter;
	
	/* man könnte auch beispielsweise "transporter = 3" schreiben dann wäre transporter = 3, minenleger = 4 usw.*/
	
	const int ianzahl_level = 8;  /* "const" für konstenten.
	damit legt man einmal einen wert fest und kann diesen später nicht mehr ändern.
	wird benutzt damit man einen wichtigen wert, wie z.b.:
	die anzahl der level nicht später irgendwo versehentlich ändert.*/
	
	cout << ianzahl_level << endl;
	

return 0;
	
} /* es gibt noch eine dritte möglichkeit eine konstante zu erzeugen mit
dem präprozessor befehl "#define anzahl_level 10", diese ist aber weniger geeignet
als die anderen beiden, siehe buch 2.7.*/
