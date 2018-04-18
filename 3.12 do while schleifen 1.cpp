#include <iostream>

using namespace std;

int main()
{
	
	int zaehler;
	
	cout << "bitte zahl eingeben: \n";
	cin  >> zaehler;
	
	/*der einfache unterscheid der do/while schleife zur normalen while schleife ist:
	dass bei der do/while schleife der codeblock bereits einmal ausgegeben wird BEVOR
	er geprüft wird. also auch wenn die bedingung nicht wahr ist,
	wird der block einmal ausgegeben.*/
	
	do 
	{
	cout << "zaehler steht bei: " << zaehler << endl;
	zaehler--;
	}
	
	while (zaehler > 0); // achtung, bei der do/while kombi braucht man hier das semikolon.
	{
	cout << "programmende" <<  endl;
 	}
	 
	 return 0;
	 
	
}
