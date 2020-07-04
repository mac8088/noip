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
	cout << "最大公约数：" << m << endl;		//为何是m？ 
	return 0;
}

//--------------------------------
//6
//yes
//--------------------------------
