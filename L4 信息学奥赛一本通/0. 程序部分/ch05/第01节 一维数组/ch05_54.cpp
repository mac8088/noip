#include<iostream>
using namespace std;
bool a[101];
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<endl;
	for(int i=1;i<=n;i++) a[i]=false;
	int f=0,t=0,s=0;
	do{
		t++;
		if(t==n+1) t=1;
		if(a[t]==false) s++;
		if(s==m)
		{
			s=0;
			cout<<t<<" ";
			a[t]=true;
			f++;
		}
	}while(f!=n);
	return 0;
}
