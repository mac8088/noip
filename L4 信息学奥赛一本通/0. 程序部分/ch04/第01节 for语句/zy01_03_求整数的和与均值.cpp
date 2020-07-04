#include<cstdio>
using namespace std;
int main()
{
	int n;
	double s, t = 0;
	scanf("%d", &n);						//输入样本容量，用数n表示 
	for(int i=1; i<=n; i++) 				//循环累加这组浮点数 
	{
		scanf("%lf", &t);
		s+=t;
	}
	printf("%.0lf %.5lf\n", s, s/n);		//输出这组数的总和（仅保留整数）和均值（精确小数点后四位） 
	return 0;
}

//--------------------------------
//4
//344 222 343 222
//1131 282.75000
//--------------------------------
