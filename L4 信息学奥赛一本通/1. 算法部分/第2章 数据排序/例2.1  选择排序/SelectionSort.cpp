#include <iostream>
using namespace std;
const int MAXN = 10001;
int main()
{
	int n, k, i, j;
	float temp, a[MAXN];
	cin >> n;
	for(i=0; i<n; i++)
		cin >> a[i];  //input n numbers
	for(i=0; i<n; i++)
	{
		k=i;
		for(j=i+1; j<n; j++)
			if(a[j] < a[k]) k=j;
		if(k!=i)
		{
			temp=a[i]; a[i] = a[k]; a[k] = temp;
		}
	} 
	for(i=0; i<n; i++)
		cout << a[i] << " ";
	return 0;
} 


//8
//49
//38
//65
//97
//76
//13
//27
//49
//13 27 38 49 49 65 76 97
//--------------------------------
//Process exited after 28.68 seconds with return value 0
//Press any key to continue . . .
