#include<cstdio>
using namespace std;
int main()
{
	int n, x, max = -1000000, min = 1000000;	//max存储序列中最大值，min存储序列中最小值 
	scanf("%d", &n);							//输入样本容量，用数n表示 
	for(int i=1; i<=n; i++)						//循环寻找序列中的最大值和最小值 
	{
		scanf("%d", &x);
		if(x>max) max = x;						//如果当前值大于之前的最大值，更新max 
		if(x<min) min = x;						//如果当前值小于之前的最小值，更新min 
	}
	printf("%d\n", max-min);					//输出序列的最大跨度值 
	return 0;
}

//--------------------------------
//6
//3 0 8 7 5 9
//9
//--------------------------------
