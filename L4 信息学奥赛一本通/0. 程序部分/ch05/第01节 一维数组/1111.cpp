#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int x, y, c[8], max = 0, index = 0;
	for(int i=1; i<=7; i++)
	{
		cin >> x >> y;
		c[i] = x +y;
		if(c[i] > max && c[i] > 8) max = c[i];
	}
	for(int i=1; i<=7; i++)
	{
		if(c[i]==max) 
		{
			index = i;  //found the first max unhappen
			break; 
		}
	}	
	cout << index << endl;
	return 0;
}
