#include <iostream>
using namespace std;
/*
 第61课，查分程序 
 数组 
*/ 
int main()
{
	int a1, a2, a3, a4, a5, n;
	cout << "1~5号的成绩：";
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	cout << "输入学号 1～5：";
	cin >> n;
	switch(n)
	{
		case 1: cout << a1; break;
		case 2: cout << a2; break;
		case 3: cout << a3; break;
		case 4: cout << a4; break;
		case 5: cout << a5; break;
		default: cout << "输入的学号不存在！";
	} 
	return 0;
}

//--------------------------------

//--------------------------------
