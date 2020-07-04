#include<cstdio>
using namespace std;
int main()
{
	double x, n;
	scanf("%lf%lf", &x, &n);			//输入现在人口x和年数n
	for(int i=1; i<=n; i++)				//循环计算n年后的人口数 
	{
		x*=1.001; 						//x存储到i年为止的人口数 
	}
	printf("%.4lf\n", x);
	return 0;
}

//--------------------------------
//13 10
//13.1306
//--------------------------------
