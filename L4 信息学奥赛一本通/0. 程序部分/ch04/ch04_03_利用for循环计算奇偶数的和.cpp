#include<iostream>
using namespace std;
int main()
{
	int sum1, sum2 = 0;
	for(int i=1; i<=100; i++) 
		if(i%2!=0) sum1+=i; 
		else sum2+=i;
	cout << sum1 << " " << sum2;
	return 0;
}

//--------------------------------
//2500 2550
//--------------------------------
