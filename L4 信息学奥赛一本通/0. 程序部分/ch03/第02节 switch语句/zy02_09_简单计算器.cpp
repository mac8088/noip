#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b,n; char x;
	//scanf("%d %d %c", &a, &b, &x);
	cin >> a >> b >> x;
	if(b==0 && x=='/') 
		printf("Divided by zero!\n");
	else if(x=='+'|| x=='-' || x=='*' || x=='/') 
	{
		switch(x)
		{
			case '+': n = a + b; break;
			case '-': n = a - b; break;
			case '*': n = a * b; break;
			case '/': n = a / b; break;	
		}
		printf("%d", n); 
	}else if(x!='+'|| x!='-' || x!='*' || x!='/') 
		printf("Invalid operator!\n"); 

	return 0; 
}

//--------------------------------
// 这个版本不工作： 1 2 // 
//	switch(x)
//	{
//		case '+': n = a + b; printf("%d", n); break;
//		case '-': n = a - b; printf("%d", n); break;
//		case '*': n = a * b; printf("%d", n); break;
//		case '/': n = a / b; printf("%d", n); break;	
//		default: printf("Invalid operator!\n"); 
//	}
//-------------------------------
//描述
//一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。
//
//输入
//输入只有一行，共有三个参数，其中第1、2个参数为整数，第3个参数为操作符（+,-,*,/）。
//输出
//输出只有一行，一个整数，为运算结果。然而：
//1. 如果出现除数为0的情况，则输出：Divided by zero!
//2. 如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!
//样例输入
//1 2 +
//样例输出
//3
//--------------------------------
