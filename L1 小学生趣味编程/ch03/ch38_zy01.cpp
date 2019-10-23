#include <iostream>
using namespace std;
int main()
{
	int i, n;
	char ans;
	cin >> n;
	ans = '0';
	for(i=1;i<n;i++)
	{
		if((i%3==0) + (i%5==0) + (i%2==0) == 2)
			ans++;
	}
	cout << ans << endl;
	return 0;
}

