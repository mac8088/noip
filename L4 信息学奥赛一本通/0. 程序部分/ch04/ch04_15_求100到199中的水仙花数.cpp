#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int a=1; a<=9; ++a)
		for(int b=0; b<=9; ++b)
			for(int c=0; c<=9; ++c)
				if(a*a*a + b*b*b + c*c*c == a*100+b*10+c) 
					cout << setw(6) << a*100+b*10+c;					//setw控制输出的场宽 
				
	return 0;
}

//--------------------------------
//求三位数100～999 中的水仙花数 
//   153   370   371   407
//--------------------------------
