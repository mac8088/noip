#include<cstdio>
using namespace std;
int main()
{
	int n, t;
	double s = 0.0;
	scanf("%d", &n);			//输入人数
	for(int i=1; i<=n; i++) 
	{
		scanf("%d", &t);		//循环中输入每人的年龄 
		s+=t;					//累加年龄 
	}
	printf("%.2lf\n", s/n);		//输出班上同学的平均年龄，精确到小数点后两位 
	return 0;
}

//--------------------------------
//2
//18
//17
//17.50
//--------------------------------
