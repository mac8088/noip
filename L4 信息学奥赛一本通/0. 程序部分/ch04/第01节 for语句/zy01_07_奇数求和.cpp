#include<cstdio>
using namespace std;
int main()
{
	long m, n, s = 0;
	scanf("%ld%ld", &m, &n);
	
	//调整大小，确保 m < n 
	long t;
	if(m>n)
	{
		t =m; m=n; n=t;
	}
	
	for(int i=m; i<=n; i++)			//循环寻找m到n之间的所有奇数 
	{
		if(i%2!=0) s+=i;			//如果是奇数就累加 
	}
	printf("%ld\n", s);
	return 0;
}

//--------------------------------
//7 15
//55
//--------------------------------
