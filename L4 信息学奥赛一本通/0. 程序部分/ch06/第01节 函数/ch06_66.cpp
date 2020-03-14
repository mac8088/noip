#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int x, y;   //Global variables, the default value is zero. 

//Maximum number of conventions
int gcd(int x, int y)  // the argement is local variable
{
	int r = x%y;
	while(r!=0)
	{
		x=y; y=r; r=x%y;  //Transfer phase division 
	}
	return y;  // return the last divisor
}

//Minimum common multiple
int lcm() 
{
	return x*y/gcd(x, y);	
}

int main()  //gcd and lcm don't need declare if they before main
{
	cin >> x >> y;
	cout << lcm() << endl;
	return 0;
	
} 
