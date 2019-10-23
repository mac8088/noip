#include <iostream>
using namespace std;
int main()
{
	int i;
	int sum = 0;
	for(i=1;i<=5;i++)
		sum += i*i;
	cout << "sum = " << sum << endl;
	return 0;
}
