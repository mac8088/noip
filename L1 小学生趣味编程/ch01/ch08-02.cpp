#include <iostream>
#include <iomanip>
using namespace std;
/*
description: 
ʹ��ͷ�ļ�iomanip,Ϊ��ʹ��setw��������������� 
output:
        18
   +   870
----------
       888
*/
int main() {
	int a, b, s;
	a = 18;
	b = 870;
	s = a + b;
	cout << a << endl; 
	cout <<  "+" << b << endl; 
	cout << "----------" << endl; 
	cout << s << endl; 
	return 0; 
}

