#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
	int b[101], n, i, j, k;
	memset(b, 0, sizeof(b));
	cin >> n;
	for(i=1; i<=n; i++)
	{
		cin >> k;
		b[k]++;
	}
	for(i=0; i<=100; i++)
		while(b[i] > 0)
		{
			cout << i << " ";
			b[i]--;  // the number minus 1 after output the integer i
		}
	
	return 0;
}


//10
//2 3 1 2 4 55 3 55 3 2
//1 2 2 2 3 3 3 4 55 55
//--------------------------------
//Process exited after 26.31 seconds with return value 0
//Press any key to continue . . .

