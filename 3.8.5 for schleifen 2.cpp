#include <iostream>

using namespace std;

int main()
{
	// For schleifen können auch mit mehr als einer Variablen initialisiert werden.
	// Mit Hilfe von logischen Operatoren mehrere Bedingungen gleichzeitig prüfen.

	for (int up = 0, down = 20; up <= 10 && down >= 0; up++, down -= 2)
	{
		cout << "up: " << up << " - down: " << down << endl;
	}

	return 0;
}
