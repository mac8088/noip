#include<iostream>
using namespace std;
int main()
{
	int n, i = 2;
	cin >> n;
	cout << n << "=";
	do
	{
		while(n%i==0)					//每个质因数的反复试除 
		{
			cout << i;
			n/=i;
			if(n!=1) cout << "*";		//一直到商为1，停止操作 
		}
		i++;							//质因数递增 
	} while(n!=1);
	return 0;
}

//--------------------------------
//36
//36=2*2*3*3
//--------------------------------
