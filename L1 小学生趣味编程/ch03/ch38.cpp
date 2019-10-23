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
			xiaotou = i + 64;  //转化成字符ASCII码: 3+64=67--> C
			cout << "小偷是：" << xiaotou;
			break; 
		}
	}
	return 0;
}

