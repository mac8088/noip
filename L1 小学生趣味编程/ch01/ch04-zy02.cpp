#include <iostream>
using namespace std;
/*
尼克爷爷的岁数、爸爸的岁数和他自己的岁数是3个等差的自然数，
每两个数相差25.已知尼克是11岁，那么请输出他们的岁数。 
output:
11
36
61 
*/
int main() {
	int n;
	n = 11;
	cout << n << endl;
	n = n + 25;   //爸爸的 
	cout << n << endl;
	n = n + 25;   //爷爷的 
	cout << n << endl;
	return 0; 
}
