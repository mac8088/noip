#include<iostream>
#include<cstdio>
#include<cstring>
#define MAXN 100+10
using namespace std;
int a[MAXN];
int main()
{
	int first=1;
	memset(a,1,sizeof(a));
	for(int i=1;i<=100;i++)
		for(int j=1;j<=100;j++)
			if(j%i==0) a[j]=!a[j];

	for(int i=1;i<=100;i++)
		if(!a[i])
		{
			if(first) first=0;
			else cout<<" ";
			cout<<i;
		}
	cout<<endl;
	return 0;
}
