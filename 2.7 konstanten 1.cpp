#include <iostream>

using namespace std;

int main()
{
	// Es gibt 3 Möglichkeiten Konstanten zu erzeugen:

	// 1:

	enum raumschifftyp { jaeger, transporter, minenleger, bomber }; /* eine möglichkeit eine konstante zu erzeugen.
	mit dem befehl "enum". Hierbei ist jäger = 0, transporter = 1 usw.*/
	raumschifftyp spieler1 = transporter;

	/* man könnte auch beispielsweise "transporter = 3" schreiben dann wäre transporter = 3, minenleger = 4 usw.*/

	// 2:

	const int ianzahl_level = 8;  /* "const" für konstenten.
	damit legt man einmal einen wert fest und kann diesen später nicht mehr ändern.
	wird benutzt damit man einen wichtigen wert, wie z.b.:
	die anzahl der level nicht später irgendwo versehentlich ändert.*/

	cout << ianzahl_level << endl;

	// 3:

#define anzahl_lvl 7 // Bei define wird kein Semikolon am ende benutzt, da es eine präprozessor Direktive ist.

	return 0;

} 
