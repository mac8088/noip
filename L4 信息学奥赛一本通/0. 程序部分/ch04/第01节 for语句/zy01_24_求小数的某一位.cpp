#include<iostream>
using namespace std;
int main()
{
	int a, b, n, t;
	cin >> a >> b >> n;
	for(int i=1;i<=n;i++)	//ѭ���������a/b��ΪС����С������nλ������ 
	{
		a*=10;				//ģ�������ʽ���� 
		t=a/b;				//t�洢����a/b��ΪС����С������iλ�����֡� 
		a%=b;	
	}
	cout << t << endl;
	return 0;
}

//--------------------------------
//1 2 
//5
//--------------------------------
