#include<iostream>
using namespace std;
int main()
{
	int n, i = 2;
	cin >> n;
	cout << n << "=";
	do
	{
		while(n%i==0)					//ÿ���������ķ����Գ� 
		{
			cout << i;
			n/=i;
			if(n!=1) cout << "*";		//һֱ����Ϊ1��ֹͣ���� 
		}
		i++;							//���������� 
	} while(n!=1);
	return 0;
}

//--------------------------------
//36
//36=2*2*3*3
//--------------------------------
