#include <cstdio>
#include <algorithm>
using namespace std;
//aha! Algorithms P22 Buybook with BubbleSort: O(N*N)
int main(){
	int a[101],n,i,j,t;
	scanf("%d", &n);			// 读入数据规模n
	for(i=1;i<=n;i++)			// n个数据ISBN号
		scanf("%d", &a[i]);
		
	// 开始冒泡排序
	for(i=1; i<=n-1; i++)		// n-1趟
		for(j=1; j<=n-i; j++) 	// 每趟待比较的数量在减少
			if(a[j]>a[j+1]) 	// 满足比较，则交互
				swap(a[j],a[j+1]);
	
	printf("%d ", a[1]);		// 先输出第1个数
	for(i=2;i<=n;i++) {			// 从2开始循环到n
		if(a[i] != a[i-1])		// 如果当前的这个数是第一次出现则输出
			printf("%d ", a[i]);
	}
	puts("");
	return 0;
}

//10 (without duplicated remove)
//20 40 32 67 40 20 89 300 400 15
//15 20 20 32 40 40 67 89 300 400

//10 (duplicated remove)
//20 40 32 67 40 20 89 300 400 15
//15 20 32 40 67 89 300 400