#include<iostream>
using namespace std;
int main()
{
	int n = 0, s = 0;
	//求s=1+2+3+4+...+n，当加到第几项时，s的值会超过1000？ 
	while(s<=1000)
	{
		++n;
		s+=n;
	}
	cout << n;
	return 0;
}

//--------------------------------
//45 
//--------------------------------
