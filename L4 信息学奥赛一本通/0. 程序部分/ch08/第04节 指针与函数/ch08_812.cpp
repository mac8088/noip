#include <cstdio>
#include <iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}
typedef int (*LP)(int, int); //define the functional pointer type:LP
int main()
{
	//define the varible of LP type and assign sum to it
	LP p = sum; 
	cout << p(2,5); // use p to invoke the function, param1:2, param2:5
	return 0;
}

// 7

