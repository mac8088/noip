#include<iostream>
using namespace std;
int main()
{
	int a[6], i, j, t;
	cout<<"输入5个整数:"<<endl;
	for(i=1;i<=5;i++)
	  cin>>a[i];
	  
	for(i=1;i<=4;i++)
	{
	    t=i;
	    for(j=i+1;j<=5;j++)
	      if(a[j]>a[t]) t=j;
	    
	    if(t!=i)
		{
	    	a[0]=a[i];
	    	a[i]=a[t];
	    	a[t]=a[0];
		}
	}
	
	for(i=1;i<=5;i++)
	  cout<<a[i]<<" "; 
	return 0;
}
