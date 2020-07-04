#include<cstdio>
using namespace std;
int main()
{
	double a, b;
	scanf("%lf%lf", &a,&b);
	printf("%.3lf%%", b/a*100);
	return 0; 
}

//--------------------------------
//输出%可以使用printf(“%%”);
//10433 60
//0.575%
//--------------------------------
