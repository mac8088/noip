#include <iostream>
using namespace std;
int main()
{
	int ge, shi, bai;
	int count;
	cout << "����ˮ�ɻ�����" << endl;
	for(int i=100;i<1000;i++)
	{
		bai = i/100;
		shi = (i/10)%10;
		ge  = i%10;
		if(bai*bai*bai + shi*shi*shi + ge*ge*ge == i)
		{
			cout << i << "  ";     //�ں�2���ո� 
			count++; 
		}
	}
	return 0;
}


//����ˮ�ɻ�����
//153  370  371  407 
