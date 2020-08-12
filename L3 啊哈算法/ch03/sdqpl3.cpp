#include <cstdio>
// 第4节 数的全排列 P70
int main() {
	int a, b, c;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++)
				if(a!=b && a!=c && b!=c)
					printf("%d%d%d\n", a,b,c);

	puts("");
	return 0;
}

//123
//132
//213
//231
//312
//321