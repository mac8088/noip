#include <iostream>
using namespace std;
/*
 第48课，加加乐 
 --各个数位之和 
 作业02: 输入一个正整数，输出该数的位数。
 如输入789， 输出是：3
 输入445566，输出是：6 
*/ 
int main()
{
	int n, num = 0;
	cin >> n;
	do
	{
		num++;          //位数先自增1 
		n /= 10;        //数字缩小10，并且取整。 
	}while(n > 0);
	cout << num << endl;
	return 0;
}

//--------------------------------
//456
//3
//--------------------------------
//445566
//6
//--------------------------------
