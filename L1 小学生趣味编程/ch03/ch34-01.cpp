#include <iostream>
using namespace std;
int main()
{
	long long i, n;
	bool flag;
	cout << "n=";
	cin >> n;
	flag = true;
	for(i=2;i<n;i++)
	{
		if(n%i==0)		//我只关心是合数吗？ 
		{
			 flag = false; 
			 break;
		}
	}
	if(flag) 
		cout<<"是素数";
	else 
		cout<<"是合数"; 
	return 0;
}
