#include <iostream>
using namespace std;
/*
 ��41�Σ���ţ�������� 
 --��ѭ�� 
*/ 
int main()
{
	int i = 10, n;
	cin >> n;
	while(true)    //����ڣ� while(1) 
	{
		cout << i;
		if(i<=n) break; 
		i-=3;
	}
	return 0;
}

//�������ǣ� 
//5
//1074
//--------------------------------
//Process exited after 7.317 seconds with return value 0
