#include<iostream>
using namespace std;
int main()
{
	int m, n, gcd;
	cin >> m >> n;
	//注意此处的特殊写法，三目运算符，返回较小的数 
	gcd = m > n ? n : m;
	while(gcd>1 && (m%gcd!=0 || n%gcd!=0))
		gcd--;
	cout << gcd << endl;
	return 0;
}

//--------------------------------
//分析： 
//
//--------------------------------
