#include <iostream>
using namespace std;

int main()
{
//	int n, t, count=0;
//	cin >> n;
//	int temp[n] = {0};
//	for(int i=0; i<n; i++)
//		cin >> temp[i];
//	cin >> t;
//	
//	for(int i=0; i<n; i++)
//	{
//		//cout << "each of: " << temp[i] << endl;
//		if(t == temp[i]) count++;	
//	}
//	cout << count << endl;
//	return 0;

	int a[1001], n, m, k = 0;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for(int i=1; i<=n; ++i)
		if(a[i] == m) ++k;
	printf("%d", k);
	return 0;
} 
