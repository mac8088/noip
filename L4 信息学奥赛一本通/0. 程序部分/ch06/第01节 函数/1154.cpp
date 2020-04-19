#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int num(int n)
{
	int x =0;
	for(int i=1; i<=n/2; ++i)
		if(n%i==0) x+=i;
	return x;
}
int main()
{
	int a, b;
	for(a=1; ; ++a)
	{
		b = num(a); 
		if(num(b)==a && a!=b)
		{
			cout << a << " " << b << endl;
			break;   // find the first one then break;
		}
	}
	return 0;
}

//220 284



