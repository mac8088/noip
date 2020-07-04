#include<iostream>
using namespace std;
int main()
{
	int x, n = 0, min, max, sum = 0;
	//当输入结束时，scanf无法再次读入，x将返回EOF 
	while(scanf("%d", &x) == 1)			//循环读入一个数x 
	{
		sum += x;						//sum存储样本数据之和 
		min = x < min ? x : min;
		max = x > max ? x : max;
		++n;							//n存储了样本数据的个数 
	}
	printf("%d %d %.3lf\n", min, max, (double)sum/n);    //(double)强制转换 
	return 0;
}

//--------------------------------
//2 8 3 5 1 7 3 6
//^Z   在windows下，输入完毕后先按Enter键，再按Ctrl+z，最后按Enter，即可介绍 
//1 8 4.375
//--------------------------------
