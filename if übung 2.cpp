#include <iostream>

using namespace std;

int main()
{
	
	int variable = 0;
	
	cout << "bitte wert eingeben: \n";
	cin	 >> variable;
	
	if (variable > 200)
	{
	cout <<"wert ist zu hoch\n";
	cout <<"bitte kleineren wert eingeben\n";
	cin	 >> variable;
	} 
	
	/*normal wird bei einer if bedingung nur die n�chste zeile
	ausgef�hrt bzw. �bersprungen.
	durch die geschweiften klammern wird der ganze codeblock ausgef�hrt bzw.
	�bersprungen.*/
	
	else
	{
	cout << "weiter im programm\n";
	}
	
	return 0;
}
