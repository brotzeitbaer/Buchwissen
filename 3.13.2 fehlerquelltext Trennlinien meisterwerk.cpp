#include <iostream>

using namespace std;

int main()
{
	int breite = 0;
	int hoehe = 0;

do
{ 
	cout << "Breite: ";
	cin >> breite;

	cout << "Hoehe: ";
	cin >> hoehe;

} while ((breite % 2 == 0) || (hoehe % 2 == 0));

	for (int y = 0; y < hoehe; y++)
	{
		for (int x = 0; x < breite; x++)
		{
			if (y == hoehe / 2)
				cout << "-";
			else if (x == breite / 2)
				cout << "|";
			else
				cout << "X";
			
		}
		cout << endl;
	}

	return 0;

}
