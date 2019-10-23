#include <iostream>
using namespace std;
/*
 第48课，加加乐 
 --各个数位之和 
*/ 
int main()
{
	long long n;
	int sum = 0, a;
	cin >> n;		//17
	do
	{
		a = n % 2;   	//1	0 0 0 1
		sum += a;		//1	0 0 0 2     --> sum as 2
		cout << a;		//1 0 0 0 1     --> all of output
		n/=2;			//8 4 2 1 0
	}while(n!=0);
	cout << endl;
	cout << sum << endl; 
	return 0;
}

//--------------------------------
//17
//10001
//2
//--------------------------------
