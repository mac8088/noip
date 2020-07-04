#include<iostream>
using namespace std;
int main()
{
	int s = 0;
	for(int i=1;i<=10;i++)
	{
		int t=1;
		for(int j=1;j<=i;j++)			//求i! 
			t*=j;
		s += t;							//累加i! 
	}
	cout << s << endl;
	return 0;
}

//--------------------------------
//利用两个for循环的嵌套实现
//外层循环10次，分别求出 1!,2!,3!,4!....并且累加。
//总共循环55次 
//内层循环，求一个数的阶乘 
//4037913
//--------------------------------
