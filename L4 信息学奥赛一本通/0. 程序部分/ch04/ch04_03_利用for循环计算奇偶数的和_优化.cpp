#include<iostream>
using namespace std;
int main()
{
	int sum1, sum2 = 0;
	//ż����2��ʼÿ�ε���2��������1��ʼÿ�ε���2��ѭ���������� 
	for(int i=1, j =2; i <= 100; i+=2, j+=2) 
	{
		sum1+=i;
		sum2+=j;
	}

	cout << sum1 << " " << sum2;
	return 0;
}

//--------------------------------
//2500 2550
//--------------------------------
