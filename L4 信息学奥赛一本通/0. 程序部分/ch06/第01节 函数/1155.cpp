#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int sh(int n)
{
	bool f = false;
	int x = 2;
	while(x<=floor(sqrt(n)) && n%x!=0)
		x++;
	if(x>floor(sqrt(n))) f = true;
	return f;
}
int hw(int n)
{
	return n%10==n/100;
}
int main()
{
	for(int i=100; i<=999; i++)
		if(hw(i) && sh(i)) cout << i << endl;
	return 0;
}


