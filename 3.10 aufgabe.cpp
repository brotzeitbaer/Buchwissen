#include <iostream>

using namespace std;

int main()
{

	int zahl = 0;
	int haelfte = 0;

	cout << "Zahl eingeben: " << endl;
	cin >> zahl;

	haelfte = zahl/2;

	if (zahl%2 == 0)
	{
		for (; zahl>0;)
		{ 
			if (zahl == haelfte)
			{
				cout << "Haelfte erreicht " << "(" << zahl << ")" << endl;
				zahl--;
			}
		zahl--;
		cout << "Countdown: " << zahl+1 << endl;
		}
	}
	else
	{
		for (;zahl>0;)
		{ 
			if (zahl == haelfte)
			{
				cout << "Haelfte erreicht" << "(" << zahl+0.5 << ")" << endl;
				zahl--;
			}
		zahl--;
		cout << "Countdown: " << zahl+1 << endl;
		}
	}

	return 0;
}
