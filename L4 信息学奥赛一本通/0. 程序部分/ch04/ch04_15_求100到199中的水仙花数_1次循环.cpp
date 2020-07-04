#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, c;
	for(int i=100;i<=999;i++)
	{
		a = i/100;								//提取百位 
		b = (i/10)%10;							//提取十位 
		c = i%100;								//提取个位 
		if(a*a*a + b*b*b + c*c*c == a*100+b*10+c) 
			cout << setw(6) << a*100+b*10+c;	//setw控制输出的场宽 
	}			
	return 0;
}

//--------------------------------
//求三位数100～999 中的水仙花数 
//   153   370   371   407
//--------------------------------
