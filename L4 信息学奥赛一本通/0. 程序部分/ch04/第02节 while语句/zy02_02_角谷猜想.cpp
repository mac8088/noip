#include<iostream>
using namespace std;
int main()
{
	long long n, a;
	cin >> n;
	while(n!=1)
	{
		if(n%2==1)			//ÅĞ¶ÏÊÇ·ñÎªÆæÊı 
		{
			cout << n << "*3+1=" << n * 3 + 1 << endl;
			n = n*3 + 1;
		}
		else
		{
			cout << n << "/2=" << n/2 << endl;
			n/=2;
		}
	} 
	cout << "End";
	return 0;
}

//--------------------------------
//5
//5*3+1=16
//16/2=8
//8/2=4
//4/2=2
//2/2=1
//End
//--------------------------------
