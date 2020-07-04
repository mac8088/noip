#include<cstdio>
using namespace std;
int main()
{
	long a, b, n;
	double x, y;
	scanf("%ld", &n);				//读入样本数据大小 
	//读入第一组数据，a为临床实验的总病例数，b为第二疗效有效的病例数
	scanf("%ld%ld", &a, &b);
	x = b / (a/1.0);				//x存储原鸡尾酒疗法的有效率 
	for(int i=2; i<=n;i++)
	{
		scanf("%ld%ld", &a, &b);
		y= b / (a/1.0);				//y存储第i种改进疗法的有效率
		if(y-x>0.05) printf("better\n");
		else if(x-y>0.05) printf("worse\n");
		else printf("same\n");
	}
	return 0;
}

//--------------------------------
//5
//125 99
//112 89
//	same
//145 99
//	worse
//99 97
//	better
//123 98
//	same
//--------------------------------
