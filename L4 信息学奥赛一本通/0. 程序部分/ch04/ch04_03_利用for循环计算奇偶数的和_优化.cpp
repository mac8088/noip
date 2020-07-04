#include<iostream>
using namespace std;
int main()
{
	int sum1, sum2 = 0;
	//偶数从2开始每次递增2，奇数从1开始每次递增2，循环次数减少 
	for(int i=1, j =2; i <= 100; i+=2, j+=2) 
	{
		sum1+=i;
		sum2+=j;
	}

	cout << sum1 << " " << sum2;
	return 0;
}

//--------------------------------
//2500 2550
//--------------------------------
