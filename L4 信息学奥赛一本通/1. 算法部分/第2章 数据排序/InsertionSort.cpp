#include <iostream>
using namespace std;
const int MAXN=10001;
int main()
{
	int n, i, j, k;
	float temp, a[MAXN];
	cin >> n;
	for(i=0; i<n; i++)
		cin >> a[i];  // Enter n number
	for(i=0; i<n; i++)
	{
		for(j=i-1; j>=0; j--)
			if(a[j] < a[i]) break;
		if((j != i-1))
		{
			temp = a[i];  // Move back to data that will be larger than a[i]
			for(k=i-1; k>j; k--) 
				a[k+1] = a[k];  // Put a[i] in the right place
			a[k+1] = temp;
		}
	}
	for(i=0; i<n; i++)
		cout << a[i] << " ";
	return 0;
}

//8
//36 25 48 12 65 43 20 58
//12 20 25 36 43 48 58 65
//--------------------------------
//Process exited after 26.53 seconds with return value 0
//Press any key to continue . . .
