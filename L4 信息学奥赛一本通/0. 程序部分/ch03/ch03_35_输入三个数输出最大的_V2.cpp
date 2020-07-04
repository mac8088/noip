#include<iostream>
using namespace std;
int main()
{
	float a, b, c, maxn;
	cin >> a >> b >> c;
	maxn = a;					//先假设a为最大数 
	if(b > maxn) maxn = b;		//maxn为a, b中最大数 
	if(c > maxn) maxn = c;		//maxn为a, b, c中最大数  
	cout << maxn << endl;
	return 0;
}
