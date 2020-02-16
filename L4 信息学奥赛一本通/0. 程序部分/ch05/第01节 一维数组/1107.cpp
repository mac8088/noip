#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int l, m, x, y, count=0;
	cin >> l >> m;

	//why is L+1 ?
	int trees[l+1];

	//init all of three, status is 1
	for(int i=0; i<=l; i++) trees[i] = 1;  
	
	//loop m
	for(int i=1; i<=m; i++) 
	{
		cin >> x >> y;
		//setup tree status from x to y.
		for(int j=x; j<=y; j++) trees[j] = 0;
	}
	
	//grand total with the remaining trees
	for(int i=0; i<=l; i++)
		if(trees[i]==1)	count++;
	cout << count << endl;
	return 0;
}
