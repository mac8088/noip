#include <iostream>
#include <iomanip>
using namespace std;
/*
 ��55�Σ�ͼ�ε����� 
  ˫��ѭ����Ӧ�� 
  ��ҵ02 
*/ 
int main()
{
	int i,j,t=0;
	for(i=1;i<=4;i++) 
	{
		cout << setw(40);
		for(j=1;j<=i;j++)         //j<=i ����ÿ�������*������ 
		{
			cout << t;
			t++;
		}
		cout << endl;
	}
	return 0;
}

//--------------------------------
//     0
//     12
//     345
//     6789
//--------------------------------
