#include <iostream>
using namespace std;
/*
 第80课，今雨新知  
 作业01，阅读程序写结果  
*/ 
int main()
{
	char c1, *p1;
	c1 = 'A';
	p1 = &c1;
	(*p1)++;
	 
	cout << c1 << endl;	
	return 0;
}

//--------------------------------
//B
//--------------------------------
