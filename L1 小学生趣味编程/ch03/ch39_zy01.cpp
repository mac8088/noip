#include <iostream>
using namespace std;
int main()
{
	int i, x, y, n, ans = 0;
	for(i=50;i<=60;i++)
	{
		x=i%10;
		y=i/10;
		n=x*10+y;
		if(i + n < 100) ans++;
	}
	cout << ans << endl;
	return 0;
}


//

