#include <cstdio>
#include <iostream>
using namespace std;
void t1 () { cout << "test1"; }
void t2 () { cout << "test2"; }
void t3 () { cout << "test3"; }
void t4 () { cout << "test4"; }
void t5 () { cout << "test5"; }
typedef void (*LP)(); //define function pointer type: LP
int main()
{
	LP a[] = {t1, t2, t3, t4, t5}; //the array of LP: function pointer type
	int x;
	cin >> x;
	a[x]();  // using a[x]() to invoke the selected function
	return 0;
}
