#include<cstdio>
using namespace std;
int main()
{
	long m, n, s = 0;
	scanf("%ld%ld", &m, &n);
	
	//������С��ȷ�� m < n 
	long t;
	if(m>n)
	{
		t =m; m=n; n=t;
	}
	
	for(int i=m; i<=n; i++)			//ѭ��Ѱ��m��n֮����������� 
	{
		if(i%2!=0) s+=i;			//������������ۼ� 
	}
	printf("%ld\n", s);
	return 0;
}

//--------------------------------
//7 15
//55
//--------------------------------
