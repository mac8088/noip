#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	if(n==1) cout << "End" << endl;		//如果等于1，无须循环 
	else
	{
		do
		{
			if(n%2==1)			//判断是否为奇数 
			{
				cout << n << "*3+1=" << n * 3 + 1 << endl;
				n = n*3 + 1;
			}
			else
			{
				cout << n << "/2=" << n/2 << endl;
				n/=2;
			}
		}while(n!=1);			//还没有得到1便继续循环 
		cout << "End" << endl;
	}
	return 0;
}

//--------------------------------

//--------------------------------
