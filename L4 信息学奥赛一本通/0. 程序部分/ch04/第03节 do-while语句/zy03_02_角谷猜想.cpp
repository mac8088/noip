#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	if(n==1) cout << "End" << endl;		//�������1������ѭ�� 
	else
	{
		do
		{
			if(n%2==1)			//�ж��Ƿ�Ϊ���� 
			{
				cout << n << "*3+1=" << n * 3 + 1 << endl;
				n = n*3 + 1;
			}
			else
			{
				cout << n << "/2=" << n/2 << endl;
				n/=2;
			}
		}while(n!=1);			//��û�еõ�1�����ѭ�� 
		cout << "End" << endl;
	}
	return 0;
}

//--------------------------------

//--------------------------------
