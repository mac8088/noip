#include <iostream>
using namespace std;
/*
 ��80�Σ�������֪  
 ��ҵ02�����Ƴ��� 
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
