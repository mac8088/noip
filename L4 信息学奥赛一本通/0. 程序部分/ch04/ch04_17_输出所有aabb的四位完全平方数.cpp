#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int m = 0;
	double n = 0.0;
	for(int a=1; a<=9; ++a) 
		for(int b=1; b<=9; ++b) 
		{
			m = a*1100 + b*11;
			n = sqrt(m);
			if(floor(n+0.5) == n)
				printf("%d\n", m);
				
		}
			
	return 0;
}

//--------------------------------
//7744
//--------------------------------
