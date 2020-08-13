#include <cstdio>

//aha! Algorithms P9-10
int main() {
	int a[1001], i, j, t, n;
	scanf("%d", &n);     // 读入一个数n，表示接下来有n个数
	for(i=1; i<=n; i++)  // 循环读入n个数到数组a中
		scanf("%d", &a[i]);
		
	// 冒泡排序的核心部分
	for(i=1; i<=n-1; i++)      // n个数排序， 只用进行 n - 1 趟
		for(j=1; j<=n-i; j++)  // 从第1位开始比较到最后的一个尚未归位的数 (n-i)
			if(a[j]<a[j+1]) {  // 比较大小，并交换位置
				t=a[j]; a[j]=a[j+1]; a[j+1]=t;  // or using swap(a[j],a[j+1])
			}

	for(i=1; i<=n; i++)
		printf("%d ", a[i]);   // 输出结果
		
	puts("");
	return 0;
}

//10
//8 100 50 22 15 6 1 1000 999 0
//1000 999 100 50 22 15 8 6 1 0


