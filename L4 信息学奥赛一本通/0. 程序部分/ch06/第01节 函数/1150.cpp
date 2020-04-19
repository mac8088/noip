#include <iostream>
using namespace std;
int wqs(int x)  // check Perfect numbers ? 
{
	int j, s = 0;
	for(j=1; j<=x-1; ++j)
		if(x%j==0) s+=j;
	return s;
}

int main()
{
	int n;
	cin >> n;
	for(int i=2; i<=n; ++i)
		if(wqs(i)==i) cout << i << endl;
	return 0;
}


// for exmaple:  6 is Perfect numbers,  6 = 1 + 2 + 3
