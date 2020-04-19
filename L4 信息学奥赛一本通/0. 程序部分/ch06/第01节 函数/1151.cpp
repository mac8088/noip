#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int sh(int i);
int main()
{
	int n, s=0;
	cin >> n;
	for(int i=2; i<=n; ++i)
		if(sh(i)) s++;
	cout << s << endl;  //output the cout of prime number
	return 0;
}

int sh(int i)  // prime number  
{
	bool f = false;
	int x = 2;
	while(x<=sqrt(i) && i%x!=0) // from 2 to sqrt(i), keep checking 
		x++;
	if(x>floor(sqrt(i))) f=true;
	return f;
}
