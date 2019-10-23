#include <iostream>
using namespace std;
int main()
{
	int x, y;
	char i, ans;
	for(i='a';i<'f';i++)
	{
		x=i-'a'+1;
		if(x%2==1) y=i+1;
		else y=i-1;
		ans = y;
		cout << ans;
	}
	return 0;
}

