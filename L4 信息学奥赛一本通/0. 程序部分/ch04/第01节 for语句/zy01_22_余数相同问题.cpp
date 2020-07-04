#include<cstdio>
using namespace std;
int main()
{
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=2; i<=a; i++)			//循环寻找满足条件的x的最小值 
	{
		if(a%i==b%i && b%i==c%i)	//查找这个大于1的数，让三个数的余数相同 
		{
			printf("%d", i);
			return 0;
		}
	}
	return 0;
}

//--------------------------------
//小学奥数7647 
//300 262 205
//19
//--------------------------------
