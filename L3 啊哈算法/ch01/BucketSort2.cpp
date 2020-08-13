#include <cstdio>

//aha! Algorithms P6
int main() {
	int book[1001], i, j, t, n;
	
	for(i=0; i<=1000; i++)
		book[i]=0;				// 初始化为0
		
	scanf("%d", &n);			// 输入一个数n，表示接下来有n个数
	for(i=1; i<=n; i++) {       // 依次读入n个数，并进行桶排列
		scanf("%d", &t);        // 把每一个数读入变量t中
		book[t]++;              // 进行计数
	}
	
	for(i=1000; i>=0; i--)      	// 依次判断编号 1000 ~ 0 的桶， 自减是从大到小，反正是从小到大
		for(j=1; j<=book[i]; j++)   // 出现了几次就将桶的编号打印几次
			printf("%d ", i);  		// 打印桶的编号， 注意不是桶中数量
	
	puts("");
	return 0;
}

//10
//8 100 50 22 15 6 1 1000 999 0
//1000 999 100 50 22 15 8 6 1 0

