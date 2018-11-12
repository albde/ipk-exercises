#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	double x, a, b, c;
	double wurzel2 = sqrt(2.0);
	cout << "a = " << flush;								// Eingabe Zahlen
	cin >> a;
	cout << "b = " << flush;
	cin >> b;
	cout << "c = " << flush;
	cin >> c;
	if (4*a*c < b*b)										// muss überprüft werden (negative Wurzel)
		{
			x = (-b + sqrt(b*b-4*a*c))/2*a;
			cout << "x1 = " << flush;
			cout << x << endl;
			x = (-b - sqrt(b*b-4*a*c))/2*a;
			cout << "x2 = " << flush;
			cout << x << endl;								// Ausgabe Zahlen 
		}
	else cout << "Negative Wurzel = Kein Ergebnis" << endl;
	return 0;
}  
