#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{	
	double x;
	int len, tot = 0;
	char s1[501], s2[501];
	cin >> x >> s1 >> s2;
	//compare the length of s1 and s2
	if(strlen(s1) == strlen(s2)) 
	{
		int len = strlen(s1);
		for(int i=0; i<len; ++i)
		{
			if(s1[i] == s2[i]) tot++;
		}
		if(tot*1.0/len >= x) cout << "yes" << endl;
		else cout << "no" << endl;
	} 
	else cout << "no" << endl;
	return 0;
}
