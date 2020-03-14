#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
void bubble(int[], int);
int main()
{
	int array[10]={11,4,55,6,77,8,9,0,7,1};  
	cout << "before sort:";
	for(int i=0; i<10; ++i)
		if(i==0) cout << array[i];
		else cout << ',' << array[i];
	cout << endl;

	//The array name is the first address of the array in memory
	bubble(array,10); 

	cout << "after  sort:";
	for(int i=0; i<10; ++i)
		if(i==0) cout << array[i];
		else cout << ',' << array[i];
	cout << endl;
	return 0;
}

//before sort:11,4,55,6,77,8,9,0,7,1
//after  sort:0,1,4,6,7,8,9,11,55,77
//From small to large

void bubble(int a[], int n)
{
	for(int i=1; i<n; ++i)  // compare n-1 times
		for(int j=0; j<n-i; ++j)
			if(a[j] > a[j+1])  // check if matched then swap 
			{
				int temp=a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
}
