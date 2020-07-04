#include<cstdio>
using namespace std;
int main()
{
	int n, m, k = 0, x;				//k存储于m相同的数的个数，初始值是0 
	scanf("%d%d", &n, &m); 			//要求读取的样本数据的大小为n，要统计的数据是m 
	for(int i=1; i<=n; i++)			//循环查找这个整数序列中与m相同的数 
	{
		scanf("%d", &x);			
		if(x==m) k++;				//如果x与m相同，就把次数累加1 
	}
	printf("%d\n", k);
	return 0;
}

//--------------------------------
3 2
2 3 2
2
//--------------------------------
