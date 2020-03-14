#include <iostream>
using namespace std;

void swap(int a, int b)
{
	int tmp=a; a=b; b=tmp;
}

int main()
{
	int c = 1, d = 2;
	swap(c, d);
	cout << "c=" << c << ", d=" << d << endl;
}


