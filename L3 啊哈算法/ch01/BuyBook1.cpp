#include <cstdio>
#include <algorithm>
using namespace std;
//aha! Algorithms P22 Buybook with BucketSort: O(N+M)
int main(){
	int a[1001],n,i,t;
	for(i=1;i<1000;i++)
		a[i]=0;  // 初始化
		
	scanf("%d", &n);		// 读入数据规模n
	for(i=1;i<=n;i++) {  	// 循环读入n个图书的ISBN
		scanf("%d", &t); 	// 把每一个ISBN号读入变量t中
		a[t]=1;				// 标记出现过的ISBN号
	}
	
	// 利用桶排序的特性，做去重
	t=0;
	for(i=1;i<1000;i++) {	// 依次判断1～1000个桶
		if(a[i]==1)	{		// 如果这个ISBN号出现过则打印出来
			printf("%d ", i);
			t++;
		}
	}	
		
	puts("");
	printf("%d\n", t);
	return 0;
}

//10
//6 1 2 7 9 3 4 5 10 8
//1 2 3 4 5 6 7 8 9 10