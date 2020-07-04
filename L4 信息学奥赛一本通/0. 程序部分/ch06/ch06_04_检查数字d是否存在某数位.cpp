#include <iostream>
using namespace std;
bool check(int, int);
int main()
{
	int a, b;
	cout << "input n, d:" << endl;
	cin >> a >> b;
	if(check(a,b) == true) cout << "true" << endl;
	else cout << "false" << endl;
	
//	cout << check(a,b) ? "true" : "false" << endl;
	 
}
bool check(int n, int d)
{
	while(n)  // C++ ·ÇÁãÎªÕæ 
	{
		int e = n%10;
		n /= 10;
		if(e==d) return true;
	}
	return false;
}
