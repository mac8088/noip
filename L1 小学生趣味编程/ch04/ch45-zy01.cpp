#include <iostream>
using namespace std;
/*
 ��45�Σ�����ЧӦ 
 --��ҵ01 
*/ 
int main()
{
	int n, x, s = 0;
	cin >> n;
	x = 1;
	while(x <= n)
	{
		if(x %3 == 1) s+=x;
		++x;
	}	
	cout << s << endl;	
	return 0;
}

//--------------------------------
//20
//70
//--------------------------------
