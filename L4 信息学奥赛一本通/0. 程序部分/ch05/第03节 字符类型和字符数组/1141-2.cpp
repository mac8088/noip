#include <iostream>
#include <cstring>
using namespace std;
string s;
int main()
{
	getline(cin, s);  // cin >> s;
	int l = s.size();
	if(strcmp(&s[l-3], "ing") == 0) l-=3;
	if(strcmp(&s[l-2], "er") == 0 || strcmp(&s[l-2], "ly") == 0) l-=2;
	for(int i=0; i<l; ++i) cout << s[i];
	cout << endl;
	return 0;
}
