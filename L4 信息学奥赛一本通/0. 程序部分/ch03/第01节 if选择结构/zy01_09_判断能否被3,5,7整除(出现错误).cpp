#include<iostream>
using namespace std;
int main()
{
	int n, c = 1;
	cin >> n;
	if(n%3==0) cout << "3" << " ", c = 0;
	if(n%5==0) cout << "5" << " ", c = 0;
	if(n%7==0) cout << "7", c = 0;
	if(c) cout << "n";
	return 0; 
}
