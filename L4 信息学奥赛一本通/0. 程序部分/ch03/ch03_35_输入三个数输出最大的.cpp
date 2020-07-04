#include<iostream>
using namespace std;
int main()
{
	float a, b, c, maxn;
	cin >> a >> b >> c;
	if(a>b && a>c) maxn=a;			//判断a是否最大 
	else if(b>a && b>c) maxn=b;		//判断b是否最大 
	else maxn = c;
	cout << maxn << endl;
	return 0;
}


//--------------------------------
//3.4 67.4 23.12
//67.4
//--------------------------------
