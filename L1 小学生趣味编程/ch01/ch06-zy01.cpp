#include <iostream>
using namespace std;
/*
description: 

output:
i = 16, sum = 31
*/
int main() {
	int i = 1, sum = 0;
	sum += i;  // sum = 1, i = 1
	i *= 2;    // i = 2
	sum += i;  // sum = 3
	i *= 2;    // i = 4
	sum += i;  // sum = 7
	i *= 2;    // i = 8
	sum += i;  // sum = 15
	i *= 2;    // i = 16
	sum += i;  // sum = 31
	cout << "i = " << i << ", sum = " << sum << endl;
	return 0; 
}
