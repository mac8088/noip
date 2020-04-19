#include <iostream>
#include <cstring>
using namespace std;
string a, b;
int main()
{
	cin >> a >> b;
	if(a.find(b) != a.npos)
		cout << b << " is substring of " << a << endl;
	else if(b.find(a) != b.npos)
		cout << a << " is substring of " << b << endl;
	else
		cout << "No substring" << endl; 
	return 0;
}
