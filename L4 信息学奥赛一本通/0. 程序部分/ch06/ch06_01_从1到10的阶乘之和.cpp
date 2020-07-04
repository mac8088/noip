#include <iostream>
using namespace std;
int js(int);
int main()
{
	int sum = 0;
	for(int i=1; i<=10; ++i)
		sum += js(i);
	cout << "sum=" << sum << endl;
	return 0;	
} 

int js(int n)
{
	int s = 1;
	for(int i=1; i<=n; i++)
		s*=i;
	return s;
}
