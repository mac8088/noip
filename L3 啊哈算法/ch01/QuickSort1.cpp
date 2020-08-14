#include <cstdio>
#include <algorithm>
using namespace std;
int a[101],n;  // 定义全局变量，这两个变量要在子函数中使用
void quickSort(int left, int right) {
	if(left > right) return;
	int i,j,t,temp;
	temp=a[left];  // temp中保存的就是基准数
	i=left, j=right;
	while(i!=j) {
		// 顺序很重要, 要先从右到左
		while(a[j]>=temp && i<j) j--;
		
		// 其次， 从左到右
		while(a[i]<=temp && i<j) i++;
		
		// 交互两个数在数组中的位置 
		if(i<j) {
			swap(a[i],a[j]);  // or using temp variable: t
		}
	}
	
	// 最终将基准数归位
	a[left] = a[i];
	a[i]=temp;
	
	quickSort(left, i-1); 	// 继续处理左边的，这里是一个递归的过程 recursion
	quickSort(i+1,  right);	// 继续处理右边的，这里是一个递归的过程 recursion 
}

//aha! Algorithms P18-19
int main(){
	int i,j;
	// 读入数据规模n和n个数据
	scanf("%d", &n);
	for(i=1;i<=n;i++) 
		scanf("%d", &a[i]);
	
	// 调用快速排序
	quickSort(1, n);
	
	// 输出排序后的结果
	for(i=1;i<=n;i++) 
		printf("%d ", a[i]);
		
	puts("");
	return 0;
}

//10
//6 1 2 7 9 3 4 5 10 8
//1 2 3 4 5 6 7 8 9 10