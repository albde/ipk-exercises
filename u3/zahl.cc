#include <iostream>
using namespace std;

void collatz()
{															
	int a, b;													// a=Zahl und b=vorherige Z (Rechnung)						 
	cout << "Zahl= " << flush;									
	cin >> a;
	
	while(a != 1 && a != -1 && a != 0 && a != -5 && a != -17)	// ungleich Zahl		
	{
		if(a % 2 == 0)											// Zahl gerade
		{
			b = a;
			a = a/2;
			cout << b << "/2 = " << a << endl;
		}
		else                          							// Zahl ungerade
		{	
			b = a;
			a = a*3+1;
			cout << b << "*3+1 = " << a << endl;
		}
	}
}
		
int  main()
{
	collatz();
	return 0;
}
