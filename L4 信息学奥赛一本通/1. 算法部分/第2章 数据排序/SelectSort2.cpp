#include <iostream>
using namespace std;
const int MAXN=10001;
float temp, a[MAXN];
int n;

//input
void inp() {
	cout << "please enter the data size:" << endl;
	cin >> n;
	cout << "please enter " << n << " number to be sorted" << endl;
	for(int i=0; i<n; i++) 
		cin >> a[i];
}

void outp() {
	//output
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

void selectSort() {
	int i,j,k;
	//process for sorting
	for(i=0; i<n; i++) {
		for(k=i, j=i+1; j<n; j++) {
			if(a[j] < a[k]) 
				k=j;    //select the index of min value
		}
		
		//or using with swap from algorithm
		if(k!=i) {
			temp=a[i]; a[i]=a[k]; a[k]=temp;
		}
	}
}
int main() {
	inp();
	selectSort();
	outp();
}

//please enter the data size:
//5
//please enter 5 number to be sorted
//1 4 5 2 3
//1 2 3 4 5
