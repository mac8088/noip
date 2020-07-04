#include<cstdio>
using namespace std;
int main()
{
	int n;
	double s, t;
	s = 0;
	scanf("%d", &n);			//输入样本容量，用数n表示
	for(int i=1; i<=n; i++) 	//循环累加这组浮点数 
	{
		scanf("%lf", &t);
		s+=t;
	}
	printf("%.4lf\n", s/n);		//输出这组数的均值，精确小数点后四位 
	return 0;
}

//--------------------------------
//2
//1.0 3.0
//2.0000
//--------------------------------
