#include <iostream>
using namespace std;
/*
 ��47�Σ��������������
 --do while ��� 
 ��ҵ01�� �Ķ�����д���  
*/ 
int main()
{
	int i = 1, n, ans = 0;
	cin >> n;
	do
	{
		ans +=i;
		i+=2;
	} while(i<=n);
	cout << ans;
	return 0;
}

//--------------------------------
//10
//25
//--------------------------------
