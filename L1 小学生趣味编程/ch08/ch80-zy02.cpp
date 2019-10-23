#include <iostream>
using namespace std;
/*
 第80课，今雨新知  
 作业02，完善城乡 
*/ 
int main()
{
	int i, *p;
	p = &i;
	for(*p=1; *p<=100; (*p)++)
	{
		cout << i << " - " << *p << endl;	
	}

	return 0;
}

//--------------------------------
//B
//--------------------------------
