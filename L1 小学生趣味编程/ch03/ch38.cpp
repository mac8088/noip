#include <iostream>
using namespace std;
int main()
{
	int i;
	char xiaotou;
	for(i=1;i<=4;i++)
	{
		if((i!=1) + (i==3) + (i==4) + (i!=4) == 3)
		{
			xiaotou = i + 64;  //ת�����ַ�ASCII��: 3+64=67--> C
			cout << "С͵�ǣ�" << xiaotou;
			break; 
		}
	}
	return 0;
}

