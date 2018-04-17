#include <iostream>

using namespace std;

int main()
{
	
	int count;
	int half;
	int half2;
	
	cout << " bitte zahl eingeben: \n";
	cin  >> count;
	
	half  = count/2;
	half2 = count%2;
	half  = half+half2;
	
	/*half = half + 1 sollte auch funktionieren
	und dafür zeile 16 und 17 weg lassen.*/
	
	for (; count>0; count--)
	{
	cout << count << endl;
	
	if (half >= count)
	{
	cout << "haelfte erreicht\n";
	break;
	}
	}
	for (; half>0; half--)
	{
	cout << half-1 << endl;
	}
	
	
	
	return 0;
}
