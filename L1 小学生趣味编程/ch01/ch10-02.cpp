#include <iostream>
using namespace std;
/*
description: 
������ʵ�� float 
output:
a, h = 3 5
s = 7.5
*/
int main() {
	int a, h;
	float s;
	cout << "a, h = ";
	cin >> a >> h;
	s = (a * h) / 2.0;   //����Ҫд��ʵ��2.0������д������2 
	cout << "s = " << s << endl; 
	return 0; 
}

