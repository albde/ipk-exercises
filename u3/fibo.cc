#include <iostream>
using namespace std;

int main()
{
	int n, z1 = 0, z2 = 1, z3 = 0;   				// z3 ist der nächste Term
	cout << "Wie viele?: " << flush;   				// Eingabeaufforderung für die Anzahl
	cin >> n;
	cout << "Fibonacci: " << endl;
	cout << z1 << " ";
	cout << z2 << " ";
	
	for (int i = 3; i <= n; ++i)					// i=3 damit auch n ausgegeben wird ansonsten n=n+2
	{

		z3 = z1 + z2;								// Wird berechnet bis max von n erreicht wird
		z1 = z2;
		z2 = z3;
		
		cout << z3 << " ";
	}
	return 0;
}
