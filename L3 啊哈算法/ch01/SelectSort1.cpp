#include <stdio.h>
#include <stdlib.h>
//aha! 啊哈C语言！ 逻辑的挑战
int main() {
	int a[6], i, t, j;
	for(i=1; i<=5; i++)
		scanf("%d", &a[i]);
		
	for(i=1; i<=4; i++) {
		for(j=i+1; j<=5; j++){
			if(a[i]>a[j]){ 
				t=a[i]; a[i]=a[j]; a[j]=t; 
			}
		}
	}
	
	for(i=1; i<=5; i++)
		printf("%d ", a[i]);
	
	puts("");
	return 0;
}
