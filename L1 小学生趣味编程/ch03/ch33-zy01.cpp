#include <iostream>
using namespace std;
int main()
{
	long long i, ans = 20;
	i = 2;
	for(;i<ans;)   //when i=11, ans =5, 11 < 5
	{
		ans-=i;
		i+=3;
	}
	cout << "i=" << i << ' ' << "ans=" << ans << endl;
	return 0;
}


