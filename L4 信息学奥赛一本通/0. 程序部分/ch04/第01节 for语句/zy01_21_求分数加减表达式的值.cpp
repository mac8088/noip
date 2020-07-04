#include<cstdio>
using namespace std;
int main()
{
	int n;
	double s = 0;		//s存储表达式的值，初始值为0 
	scanf("%d", &n);
	for(int i=1; i<=n; i++)		//循环计算表达式的值 
	{
		if(i%2==0) s-=1.0/i;	//累加n=i时表达式的值，奇+偶- 
		else s+=1.0/i;
	}
	printf("%.4lf\n", s);
	return 0;
}

//--------------------------------
//2
//0.5000
//--------------------------------
