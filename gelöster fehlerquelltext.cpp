#include <iostream>

using namespace std;

int main()
{
	
	const int tempolimit = 100;
	float geschwindigkeit = 130.8f;
	int differenz = 0;
	
	differenz = static_cast <int> (geschwindigkeit-tempolimit);
	
	cout << "das tempolimit betraegt: " << tempolimit << endl;
	cout << "ihre geschwindigkeit betraegt: " << geschwindigkeit << endl;
	cout << "sie sind " << differenz << " km/h zu schnell gefahren\n";
	
}
