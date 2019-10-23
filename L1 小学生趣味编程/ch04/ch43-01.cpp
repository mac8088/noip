#include <iostream>
using namespace std;
/*
 第43课，最大公约数 
 --辗转相除 
*/ 
int main()
{
	long long m, n, r;
	cout << "输入两个正整数：";
	cin >> m >> n;
	r = m % n;               // 15%18 = 15
	while(r!=0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	cout << "最大公约数：" << n << endl;	
	return 0;
}


//输入两个正整数：15 18
//最大公约数：3
//
//--------------------------------
//Process exited after 4.098 seconds with return value 0
