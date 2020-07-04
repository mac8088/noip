#include<iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int r = m%n;
	while(r!=0)			//或者是： while(r) --> c++中非0即真 
	{
		m = n;
		n = r;
		r = m%n;
	} 
	cout << "最大公约数：" << n << endl;
	return 0;
}

//--------------------------------
//分析： 
//
//--------------------------------
