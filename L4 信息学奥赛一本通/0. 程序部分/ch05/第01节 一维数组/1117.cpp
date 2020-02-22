#include <cstring>
#include <iostream>
using namespace std;
int a[20001];
bool s[20001];
int main()
{
	int n;
	cin >> n;
	memset(s, true, sizeof(s));  // init as "No duplicated"
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	for(int i=1; i<=n; ++i)
		if(s[i])
			for(int j=i+1; j<=n; ++j)	// j=i+1
				if(a[i] == a[j]) s[j] = false;  // false means duplicated
	for(int i=1; i<=n; ++i)		
		if(s[i]==true) cout << a[i] << " ";
	return 0;
}
