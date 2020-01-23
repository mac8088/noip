#include <iostream>
using namespace std;
const int MAXN = 10001;
int main()
{
	int n, i, j;
	float a[MAXN];
	cin >> n;
	for(i=0; i<n; i++)
		cin >> a[i];  //input n numbers
	for(i=n-1; i>=1; i--)  //Make an n-1 round of bubbling
	{
		for(j=0; j<i; j++)  //i-time comparison per round
		{
			if(a[j] > a[j+1]) //Comparison of the two adjacent elements, if reverse order is exchanged
				swap(a[j], a[j+1]);
		}
	}
	for(i=0; i<n; i++)
		cout << a[i] << " ";
	return 0;

}
