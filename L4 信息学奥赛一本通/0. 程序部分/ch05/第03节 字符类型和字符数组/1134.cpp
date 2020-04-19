#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
char a[256];
int main()
{
	gets(a);  //gets read one entry line.
	int l = strlen(a);  //strlen need cstring header!
	bool ok = true;
	if(a[0] >= '0' && a[0] <='9')  //check a: first letter should be not digital
	{
		cout << "no" << endl;
		return 0;
	}
	for(int i=0; i<l; i++)  // check b: from 0 to l-1, whey recheck index=0?
	{
		if(!(
		   (a[i] >= 'a' && a[i] <='z') 
		|| (a[i] >= 'A' && a[i] <='Z') 
		|| (a[i] >= '0' && a[i] <='9') 
		|| (a[i] == '_')))
		{
			cout << "no" << endl;
			return 0;
		}
	}
	//the check should: check a plus check b
	cout << "yes" << endl;	
	return 0;
}
