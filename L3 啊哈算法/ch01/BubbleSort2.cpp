#include <cstdio>
//aha! Algorithms P10-11
struct student {
	char name[21];
	int score;
};  // 这里定义一个结构体用来存储姓名和分数
int main() {
	student a[1001], t;
	int i,j, n;
	scanf("%d", &n);  // 读入一个数n
	
	for(i=1; i<=n; i++)  // 循环输入n个同学的姓名和成就
		scanf("%s %d", &a[i].name, &a[i].score);
	
	// 按照分数从高到低进行排序
	for(i=1; i<=n-1; i++)
		for(j=1; j<=n-i; j++)
			if(a[j].score < a[j+1].score) {
				t=a[j]; a[j]=a[j+1]; a[j+1]=t;  // or using swap(a[j],a[j+1])
			}
	// 输出
	for(i=1; i<=n; i++)
		printf("%s\n", a[i].name); 
		
	puts("");
	return 0;
}

//5
//huhu 5
//haha 3
//xixi 5
//hengheng 2
//gaoshou 8
//----------------output
//gaoshou huhu xixi haha hengheng


