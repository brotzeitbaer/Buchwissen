#include <iostream>

using namespace std;

int main ()
{
	
	int hoehe, hoehe2, breite, breite2, breite3;
	
	cout << "hoehe eingeben: " << endl;
	cin  >> hoehe;
	
	cout << "breite eingeben: " << endl;
	cin  >> breite;
	
	hoehe2 = hoehe/2;
	breite2 = breite/2;
	breite3 = breite + 1;

	for (int x = 0; hoehe > x; x++)
	{
		if (hoehe%2 == 0 && hoehe2 == x)
		{
			for (;breite3 > 0;)
			{
			cout << "-";
			breite3--;
			
			if (breite3 == 1)
			{
			cout << "-";
			cout << endl;
			breite3--;
			}
			}
		}
		else if ( hoehe%2 == 1 && hoehe2 == x)
		{
			for (;breite3 - 1 > 0;)
			{
			cout << "-";
			breite3--;
			
			if (breite3 - 1 == 1)
			{
			cout << "-";
			cout << endl;
			breite3--;
			}
			}
		}
	
	for (int y = 0; breite > y; y++)
	{
		if (breite%2 == 0 && breite2 == y)
		{
			cout << "|";
		}
		else if (breite%2 == 1 && breite2 == y)
		{
			cout << "|";
			breite--;
		}
		cout << "x";
	}
		cout << endl;
	}
	return 0;
}
