#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long i, a1, a2, a3;
	a2 = a1 = 1;
	cout << setw(5) << a1;
	cout << setw(5) << a2;
	for(i=3;i<=10;i++)
	{
		a3 = a1 + a2;
		cout << setw(5) << a3;
		a1 = a2;
		a2 = a3;
	}
	return 0;
}

