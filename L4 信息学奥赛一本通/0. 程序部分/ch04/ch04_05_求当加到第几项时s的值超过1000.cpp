#include<iostream>
using namespace std;
int main()
{
	int n = 0, s = 0;
	//��s=1+2+3+4+...+n�����ӵ��ڼ���ʱ��s��ֵ�ᳬ��1000�� 
	while(s<=1000)
	{
		++n;
		s+=n;
	}
	cout << n;
	return 0;
}

//--------------------------------
//45 
//--------------------------------
