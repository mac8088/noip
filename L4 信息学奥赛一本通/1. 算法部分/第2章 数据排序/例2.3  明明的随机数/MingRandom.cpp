#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int b[1001], n, i, j, m=0, x;
	memset(b, 0, sizeof(b));
	cin >> n;
	for(i=1; i<=n; i++)
	{
		cin >> x;
		if(b[x] == 0) m++;  // b[x] == 0 is new random, m increase 1.
		b[x]++;
	}
	cout << m << endl; // output the count of all of different random
	for(i=0; i<=1000; i++)
		if(b[i]>0) cout << i << " ";  // output the sorting result.
	cout << endl;
	return 0;
}


//10
//20 40 32 67 40 20 89 300 400 15
// 8
//15 20 32 40 67 89 300 400
//
//--------------------------------
//Process exited after 27.19 seconds with return value 0
//Press any key to continue . . .
