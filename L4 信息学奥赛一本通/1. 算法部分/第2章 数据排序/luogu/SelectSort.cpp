#include <iostream>
#include <algorithm>
using namespace std;

void selectSort(int *a, int n) {
	int c, x, i;
	
	//select the min value from [c,n]
	for(c=1;c<=n;c++) {   // loop var: c
		for(x=c, i=c; i<=n; i++) {   // loop var: i
			if(a[i] < a[x]) {
				x = i;
			}
		}
		swap(a[x], a[c]);

		//for debug info
		for(int i=1; i<=n; i++) {
			printf("%d ", a[i]);
		}
		puts("");
	}
}

int main() {
	int a[10010] = {0,1,4,5,3,2};
	int n=5;
	selectSort(a, 5);
	return 0;
}
