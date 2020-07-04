#include<iostream>
using namespace std;
//编写一程序求满足不等式 1+1/2+1/3+1/4+...+1/n >= 5的最小n值 
int main()
{
	int i = 0;
	float s = 0;
	while(s < 5)		//当s的值还未超过5时 
	{
		++i;
		s += 1.0/i;	
	} 
	cout << i;
	return 0;
}

//--------------------------------
//结果： 
//83
//--------------------------------
