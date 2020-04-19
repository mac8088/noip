#include <iostream>
#include <cstring>
using namespace std;
int f = 1;
string s;
int main()
{
	while(cin >> s)
	{
		if(f) f = 0;
		else cout << ",";
		cout << s.size();
	}
	return 0;
}
