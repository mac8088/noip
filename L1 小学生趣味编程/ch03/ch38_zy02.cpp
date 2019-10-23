#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=1; i<=3; i++)
		if((i==2)+(i!=2)+(i!=3)==1)
	  		break;
	  	
	switch(i)
	{
		case 1: cout << "狐狸老师做的" << endl; break;
		case 2: cout << "尼克做的" << endl; break;
		case 3: cout << "格莱尔做的" << endl; break;
	}	
	return 0;
}

