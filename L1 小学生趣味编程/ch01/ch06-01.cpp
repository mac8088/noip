#include <iostream>
using namespace std;
/*
description: 

output:
32
*/
int main() {
	int n = 1;
	n = n * 2;
	n = n*2;
	n = n * 2;
	n *= 2;
	n *= 2;
	cout << "n = " << n << endl;
	return 0; 
}
