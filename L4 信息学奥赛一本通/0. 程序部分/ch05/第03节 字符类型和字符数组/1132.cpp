#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;  //input n for N games.
	char a[101], b[101];
	for(int i=0; i<n; i++) 
	{
		cin >> a >> b;  //Rock, Scissors and Paper
		if(a[0]=='R' && b[0] =='S' 
			|| a[0] == 'S' && b[0] == 'P' 
			|| a[0] == 'P' && b[0] == 'R')  // just check the first letter
			cout << "Player1" << endl;
		else if(a[0] == b[0]) cout << "Tie" << endl;
		else cout << "Player2" << endl;
	}
	return 0;
}
