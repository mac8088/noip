#include <iostream>
using namespace std;
int main()
{
	int sum, i;
	sum = 0;
	for(i=1;i<=100;i++)
		sum += i * (i+1);
	cout << sum << endl;
	return 0;
}
