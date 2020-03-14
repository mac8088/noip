#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;
const int n = 100;
int t;
bool a[n+1];
int main()
{
	for(int i=0; i<=n; ++i) a[i] = true;  //init also use: memset(a, 1, sizeof(a))
	a[1] = false;  // 1 is not prime!
	for(int i=2; i<=sqrt(n); ++i)
		if(a[i])
			for(int j=2; j<=n/i;++j)  // from 2x to nx...
				a[i*j] = false;
	t = 0;  //control output
	for(int i=2; i<=n; ++i)
	{
		if(a[i])
		{
			cout << setw(5) << i;
			t++;
			if(t%5==0) cout << endl;
		}
	}
	return 0;
}

//    2    3    5    7   11
//   13   17   19   23   29
//   31   37   41   43   47
//   53   59   61   67   71
//   73   79   83   89   97
