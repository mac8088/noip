#include <iostream>
using namespace std;
int main()
{
	int ge, shi, bai;
	int count;
	cout << "计算水仙花数：" << endl;
	for(int i=100;i<1000;i++)
	{
		bai = i/100;
		shi = (i/10)%10;
		ge  = i%10;
		if(bai*bai*bai + shi*shi*shi + ge*ge*ge == i)
		{
			cout << i << "  ";     //内含2个空格 
			count++; 
		}
	}
	return 0;
}


//计算水仙花数：
//153  370  371  407 
