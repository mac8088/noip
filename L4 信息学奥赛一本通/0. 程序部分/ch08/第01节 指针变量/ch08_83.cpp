#include<iostream>
using namespace std;
int a=10;
double b=3.5;
void *p;
int main()
{	
	p=&a;  // using & to get address then assign to p
	cout << *(int*)p << endl; // must cast as int type;
	p=&b;
	cout << *(double*)p << endl; // must cast as double type
	return 0;
}