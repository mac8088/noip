#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char c1 = 'a';
	char c2 = 'A';
	cout << c1 << " " << c2 << endl;
	c1 = c1 - 32;   // c1-=32;
	c2 = c2 + 32;   // c2+=32;
	cout << c1 << " " << c2 << endl;
	return 0; 
}

//--------------------------------
//a A
//A a
//
//--------------------------------
