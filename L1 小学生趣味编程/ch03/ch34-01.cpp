#include <iostream>
using namespace std;
int main()
{
	long long i, n;
	bool flag;
	cout << "n=";
	cin >> n;
	flag = true;
	for(i=2;i<n;i++)
	{
		if(n%i==0)		//��ֻ�����Ǻ����� 
		{
			 flag = false; 
			 break;
		}
	}
	if(flag) 
		cout<<"������";
	else 
		cout<<"�Ǻ���"; 
	return 0;
}
