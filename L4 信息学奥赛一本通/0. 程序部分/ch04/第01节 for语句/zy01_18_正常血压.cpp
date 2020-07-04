#include<cstdio>
using namespace std;
int main()
{
	int a, b, n, max = 0;		//max存储病人血压连续正常的最长小时数 
	scanf("%d", &n);			//样本大小
	int t = 0; 
	for(int i=1; i<=n; i++)
	{
		scanf("%d%d", &a, &b);  //读入高压和低压
		if(a>=90&&a<=140 && b>=60&&b<=90) 
		{
			t++;				//如果大于目前病人血压连续正常的最长小时数，则替换max 
			if(t>max) max = t;	
		}else t = 0;			//这个小时病人血压不正常，清零 
	} 
	printf("%d\n", max);
	return 0;
}

//--------------------------------
//4
//100 80
//90  50
//120 60
//140 90
//2
//--------------------------------
