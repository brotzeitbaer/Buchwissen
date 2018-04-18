#include <iostream>

using namespace std;

int main()
{
	
	int punkte = 0;
	
	//for schleife ohne initialisierung
	for (; punkte<3; punkte++)
	{
		cout << "punkte 1: " << punkte << endl;
	}
	
	//for schleife nur mit bedingungsteil
	for (; punkte >0;)
	{
	punkte--;
		cout << "punkte 2: " << punkte << endl;
	}
	
	/* bei dieser schleife wird alles weg gelassen
	würde man unten nicht die bedingung einfügen,
	so würde die schleife endlos laufen*/
	for (;;)
	{
		punkte++;
		if (punkte == 123)
		break;
	}
	
	cout << "punkte : " << punkte << endl;
	 
	return 0;
}
