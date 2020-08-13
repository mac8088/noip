#include <cstdio>

//aha! Algorithms P4-5 简易版本的桶排序
int main() {
	int a[11], i, j, t;
	for(i=0; i<=10; i++) 
		a[i] = 0;  // 初始化为0
	
	for(i=1; i<=5; i++) { // 循环读入5个数
		scanf("%d", &t);  // 把每一个数读入变量t中
		a[t]++;           // 进行计数
	}
	
	for(i=0; i<=10; i++) // 依次判断 a[0] ~ s[10]
 		for(j=1; j<=a[i]; j++)  // 出现几次就打印几次
			printf("%d ", i);
	
	puts("");
	return 0;
}

//5 3 5 2 8
//2 3 5 5 8