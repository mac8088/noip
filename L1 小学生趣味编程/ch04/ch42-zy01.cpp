#include <iostream>
using namespace std;
/*
 ��42�Σ���С������ 
 ö���㷨 
*/ 
int main()
{
	int s, n, a;
	s = 0;
	a = 10;
	cin >> n;
	while(a > n)
	{
		s++;
		a-=2;
	}
	cout << s << endl;	
	return 0;
}

//2
//4
//
//--------------------------------
//Process exited after 5.685 seconds with return value 0
