#include <iostream>
#include <iomanip>
using namespace std;
/*
 ��55�Σ�ͼ�ε����� 
  ˫��ѭ����Ӧ�� 
*/ 
int main()
{
	int i,j;
	for(i=1;i<=5;i++) 
	{
		cout << setw(41-i) << ' ';
		for(j=1;j<=i*2-1;j++)         //j<=i*2-1 ����ÿ�������*������ 
		{
			cout << "*";
		}
		cout << endl;	
	}
	return 0;
}

//--------------------------------
//     *
//    ***
//   *****
//  *******
// *********
//--------------------------------
