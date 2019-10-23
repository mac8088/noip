#include <iostream>
using namespace std;
/*
 第44课，角谷猜想 
--作业02
计算2020-1+2-3+4-5+....n (n为奇数时减，偶数时加) 
*/ 
int main()
{
	int i, sum, n;
	sum = 2020;
	cout << "n = ";
	cin >> n;
	i = 1;
	while(i <= n)
	{
		if(i % 2 == 1)
			sum -= i;
		else
			sum += i;
		i++;
	}
	cout << sum << endl;
	return 0;
}

//--------------------------------
//n = 2020
//3030
//--------------------------------
