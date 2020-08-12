#include <cstdio>

// 枚举算法又叫穷举算法， 最简单的奥数题求解： p58
int main() {
	int i;
	for(i=1; i<=9; i++) 
		if((i*10+3) * 6528 == (30+i) * 8256) 
			printf("%d\n",i);
	return 0;
}

//4