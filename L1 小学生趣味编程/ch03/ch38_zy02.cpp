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
		case 1: cout << "������ʦ����" << endl; break;
		case 2: cout << "�������" << endl; break;
		case 3: cout << "����������" << endl; break;
	}	
	return 0;
}

