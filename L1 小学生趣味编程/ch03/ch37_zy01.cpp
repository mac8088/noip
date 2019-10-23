#include <iostream>
using namespace std;
int main()
{
	int a, b, i;
	cout << "please enter one number:";
	cin >> a;
	b = 1;
	for(i=1;i<a;i++)
	{
		b*=i;
		if(b%3==0) b/=3;
		if(b%5==0) b/=5;
	}
	cout << b << endl;
	return 0;
}

