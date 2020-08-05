#include <iostream>
using namespace std;
const int MAXN=10001;
int main() {
	int n,k,i,j;
	float temp, a[MAXN];
	
	//input
	cin >> n;
	for(i=0; i<n; i++) 
		cin >> a[i];
	
	//process for sorting
	for(i=0; i<n; i++) {
		k=i;
		for(j=i+1; j<n; j++) {
			if(a[j] < a[k]) 
				k=j;    //select the index of min value
		}
		
		//or using with swap from algorithm
		if(k!=i) {
			temp=a[i]; a[i]=a[k]; a[k]=temp;
		}
	}
	
	//output
	for(i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

//5
//1 4 5 3 2
//1 2 3 4 5
