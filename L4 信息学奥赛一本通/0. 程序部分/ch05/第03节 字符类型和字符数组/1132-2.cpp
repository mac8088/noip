#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;  //input n for N games.
	string a[101], b[101], s[101];
	for(int i=1; i<=n; i++) 
	{
		cin >> a[1] >> b[1];  //Rock, Scissors and Paper
		if(a[i]==b[i]) 
			cout << "Tie" << endl;
		else if(a[i] == "Rock" && b[i]=="Scissors" 
			|| a[i] == "Scissors" && b[i]=="Paper" 
			|| a[i] == "Paper" && b[i]=="Rock") 
			cout << "Player1" << endl;
		else cout << "Player2" << endl;
	}
	return 0;
}
