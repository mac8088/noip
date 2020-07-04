#include <cstdio>
#include <iostream>
using namespace std;
int t(int a)
{
	return a;
}
int main()
{
	cout << t << endl; 
	int (*p) (int a);  // define the function pointer
	p = t;
	//p(5) is for: c++, (*p)(10) is for: c
	cout << p(5) << ", " << (*p)(10) << endl;
	return 0;
}

//1
//5, 10
