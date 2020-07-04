#include<iostream>
using namespace std;
int main()
{
	int t = 1, s = 0;
	for(int i=1; i<=10; i++) 
	{
		t*=i;						//t为上一个数的i-1的阶乘值，再乘以i，即为：i!
		s+=t; 
	}
	cout << s << endl;
	return 0;
}

//--------------------------------
//总共循环10次 
//4037913
//--------------------------------
