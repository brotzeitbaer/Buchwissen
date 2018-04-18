#include <iostream>

using namespace std;

int main()
{
	
	cout << "speicherbedarf der datentypen: " <<endl << endl;
	
	cout << "bool benoetigt  : " << sizeof (bool)   << " Bytes" << endl
		 << "int benoetigt   : " << sizeof (int)    << " Bytes" << endl
		 << "short benoetigt : " << sizeof (short)  << " Bytes" << endl
		 << "long benoetigt  : " << sizeof (long)   << " Bytes" << endl
		 << "char benoetigt  : " << sizeof (char)   << " Bytes" << endl
		 << "float benoetigt : " << sizeof (float)  << " Bytes" << endl
		 << "double benoetigt: " << sizeof (double) << " Bytes" << endl;
	
	/*mit "sizeof" können wir den speicherbedarf ausgeben.
	pro byte kann man 256 werte darstellen.
	2 bytes sind dann 256 * 256 = 65536.
	bei "signed" verschiebt sich das ganze natrülich ins negative.*/
	
	return 0;
	
}
