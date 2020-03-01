#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{	
	int l, k;
	char a[10000];
	
	scanf("%s", a);   // here not need & for char[]
	l = strlen(a);
	for(int i=0; i<l; ++i)
	{
		k=0;
		for(int j=0; j<l; ++j) if(a[i] == a[j]) k++;
		if(k==1)
		{
			printf("%c", a[i]);
			exit(0);  //must be exit
		}
	}
	cout << "no" << endl;
	return 0;
}
