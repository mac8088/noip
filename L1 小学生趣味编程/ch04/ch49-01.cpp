#include <iostream>
#include <cmath>
using namespace std;
/*
 第49课，大大大 
 --纯小数变整数  
*/ 
int main()
{
	double x, y;
	long long num;
	cout << "请输入一个纯小数" << endl;
	do
	{
		cout << "x= ";
		cin >> x;
	} while(x>=1 || x<=0);
	
	num = 1;
	do
	{
		num *= 10;
		y = x * num;
	} while(fabs(y - (int)y) > 1e-9);
	
	cout << (int)y << endl;
	return 0;
}

//--------------------------------
//17
//10001
//2
//--------------------------------
