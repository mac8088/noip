#include <iostream>
using namespace std;
/*
 ��46�Σ������� 
 --����תС�� 
 ��ҵ�� �Ķ�����д��� 
*/ 
int main()
{
	int a, b, n, num = 0;
	cin >> a >> b >> n;
	while(a<=b)
	{
		if(a%n==0) num++;
		a++;
		b-=10;
	}
	cout << num << endl;	
	return 0;
}

//--------------------------------
//1 100 5
//2
//--------------------------------
