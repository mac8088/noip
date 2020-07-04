#include <iostream>
using namespace std;
int t;
int fac(int);
int main()
{
	int x;
	cin >> x;
	fac(x);
	cout << x << "!=" << t << endl; 
	return 0;
}
int fac(int x)
{
	if (x==1) t = 1;
	else
	{
		fac(x-1);
		t *= x;
	}
}
