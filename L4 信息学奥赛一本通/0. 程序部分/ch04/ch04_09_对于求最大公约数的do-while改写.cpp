#include<iostream>
using namespace std;
int main()
{
	int m, n, r;
	cin >> m >> n;
	
	do
	{
		r = m%n;
		m = n;
		n = r;
	}while(r!=0);
	cout << "���Լ����" << m << endl;		//Ϊ����m�� 
	return 0;
}

//--------------------------------
//6
//yes
//--------------------------------
