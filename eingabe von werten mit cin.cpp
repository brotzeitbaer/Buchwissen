#include <iostream>

using namespace std;

int main ()
{
	
	int runde1, runde2;
	int gesamtpunkte = 0;
	cout << "punkte fuer runde 1 eingeben: " << endl;
	cin  >> runde1;
	
	cout << "punkte fuer runde 2 eingeben: " << endl;
	cin  >> runde2;
	
	gesamtpunkte = runde1 + runde2;
	
	cout << "die gesamtpunkte betragen: " << gesamtpunkte << endl;
	
	cin.sync();
	cin.get();
	return 0;
	
}
