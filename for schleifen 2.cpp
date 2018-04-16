#include <iostream>

using namespace std;

int main ()
{
	
	for (int hoch = 0, runter = 20; hoch <=10; hoch++, runter -= 2)
	
	/*for schleifen können auch mit mehr als einer variable
	initialisiert werden.*/
	
	{
		cout << "hoch : " << hoch << " - runter : " << runter << endl;
	}
	
	return 0;
}
