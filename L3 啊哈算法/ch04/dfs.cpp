#include <cstdio>
int a[10], book[10], n;

void dfs(int step) {  // step代表着现在站在第几个盒子前面
	int i;
	if(step==n+1) {   // 如果站在第n+1个盒子面前，则表示前n个盒子已经放好了扑克牌
		for(i=1;i<=n;i++)   // 输出一个全排列 (1..n) 号盒子中的扑克牌编号
			printf("%d", a[i]);
		puts("");
		return;  // 返回之前的一步， 也就是最近一次调用dfs函数的地方
	}
	
	// 此时站在第step给盒子面前，应该放哪张牌呢？
	for(i=1;i<=n;i++) {
		if(book[i]==0) { // 判断扑克牌是否在手上
			a[step] = i; // 如果在手上，将第i号扑克牌放入第step个盒子中
			book[i] = 1; // 将 book[i]设为1， 表示i号扑克已经不在手上
			
			// 第step给盒子已经放好扑克牌，接下来需要走到下一个盒子面前
			dfs(step+1); // 这里通过函数的递归调用来实现(自己调用自己)
			
			// 这里是非常重要的一步
			book[i] = 0; // 一定要将刚才尝试的扑克牌收回，才能进行下一次尝试
		}
	}
	return;
}

int main() {
	scanf("%d",&n);  // read the number: n (1~9)
	dfs(1);          // first locate at box 1
	puts("");
	return 0;
}

