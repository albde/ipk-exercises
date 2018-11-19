#include <iostream>
#include <cmath>
using namespace std;

int iterativ( int q,int n)
{
	int e = 0;
	for(int i=0; i<=n;i++)
	{
		if(i==0)
		e = 1;
		else if(q==1 or i==1)
		e = q;
		else
		e = q*e;
		cout << q << "^" << i << " = " << e <<endl;
	}
}

int re(int q,int n)
{
	int e;
	if (n ==-1)
	{
		return 1;
	}
	else
	{
		e = re(q,n-1);
		cout << q << "^" << n << " = " << e <<endl;
		return q*e;
	}
}

int bimp(int q,int n)
{
	int e = 0;
	for (int i=0;i<=n;i++)
	{
	if (i==0)
		e = 1;
	else if(i==1 or q==1)
		e = q;
	else if (q%2==0)
		e = (e*q/2)*2;
	else 
		e = (e*q-1/2);
	cout << q << "^" << i << " = " << e << endl;
	}
}

