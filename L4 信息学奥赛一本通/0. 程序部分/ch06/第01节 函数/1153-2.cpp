#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int sh(int);
int main()
{
	for(int i=11; i<=99; i++)
		if(sh(i) && sh((i%10)*10 + i/10)) cout << i << endl;
	return 0;
}

int sh(int n)
{
	bool f = false;
	int x = 2;
	while(x<=floor(sqrt(n)) && n%x!=0)
		x++;
	if(x>floor(sqrt(n))) f = true;
	return f;
}

//11
//13
//17
//31
//37
//71
//73
//79
//97

