#include <iostream>

using namespace std;

int main()
{
	
	int hoehe;
	int breite;
	
	cout << "hoehe eingeben: \n";
	cin  >> hoehe;
	
	cout <<"breite eingeben: \n";
	cin  >> breite;
	
	for (int x = 0; breite > x; x++)
	{
	for (int y = 0; hoehe > y; y++)
	{
		cout << "x";
	}
		cout << endl;
	}

	return 0;
}
