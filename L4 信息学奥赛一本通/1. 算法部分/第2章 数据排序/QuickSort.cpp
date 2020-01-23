#include <iostream>
using namespace std;
void qsort(int, int);
int a[101];
int main()
{
	int n, i;
	cin >> n;
	for(i=1; i<=n; i++)
		cin >> a[i];
	qsort(1, n);
	for(i=1; i<=n; i++)
		cout << a[i] << " ";
	return 0;
}

void qsort(int l, int r)
{
	int i, j, mid, p;
	i = l; j = r;
	mid = a[(l+r)/2];
	do
	{
		while(a[i] < mid) i++;
		while(a[j] > mid) j--;
		if(i <= j)
		{
			p = a[i]; a[i] = a[j]; a[j] = p;
			i++; j--;
		}
	}while(i<=j);
	if(l<j) qsort(l, j);
	if(i<r) qsort(i, r);
}


//8
//10 4 6 3 8 2 5 7
//2 3 4 5 6 7 8 10
//--------------------------------
//Process exited after 24.77 seconds with return value 0
//Press any key to continue . . .


