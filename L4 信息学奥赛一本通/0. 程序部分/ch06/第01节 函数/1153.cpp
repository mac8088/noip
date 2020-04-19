#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

//prime number 
int sh(int i)
{
	bool f = false;
	int x = 2;
	while(x<=sqrt(i) && i%x!=0) // from 2 to sqrt(i), keep checking 
		x++;
	if(x>floor(sqrt(i))) f=true;
	return f;
}

bool jdsh(int n)
{
	int a, b;
	b = n%10;
	a = n/10;
	int m = b*10+a;
	return sh(n) && sh(m);
}

int main()
{
	for(int i=11; i<=99; i++)
	{
		if(jdsh(i)) printf("%d\n", i);
	}
	return 0;
}

