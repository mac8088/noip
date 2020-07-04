#include <cstdio>
#include <cstring>

#define MAXN 100+10
int a[MAXN];

int main()
{
	int n, first = 1;
	memset(a, 0, sizeof(a));  //数组a清零
	for (int i=1; i<=100; ++i)  //第1个循环模拟100个人 
		for (int j=1; j<=100; ++j)  //第2个循环模拟100个门
			if (j%i == 0) a[j] = !a[j];  //相反处理 
	
	for (int i=1; i<=100; ++i)
		if (a[i])
		{
			//为了避免输出多余空格，设置标记变量first 
			if(first) first = 0; else printf(" ");
			printf("%d", i);	
		}
	return 0;	
} 
