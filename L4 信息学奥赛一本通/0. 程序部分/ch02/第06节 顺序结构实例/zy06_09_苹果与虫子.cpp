#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n, x, y, a, b;
	cin >> n >> x >> y;				//给定3个整数
	a = y/x;						//a为y小时内虫子能吃完的苹果数量 
	b = n - ceil(a); 				//b为y小时后剩下的苹果数量 
	if(b < 0) b = 0;				//处理b<0的情况。 
	cout << b << endl;
	return 0; 
}

//--------------------------------

//--------------------------------
