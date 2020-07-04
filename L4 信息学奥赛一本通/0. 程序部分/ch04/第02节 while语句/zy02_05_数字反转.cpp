#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	int n, s = 0;
	scanf("%d",&n);
	if(n<0) printf("-"); 		//是负数，先输出负号 
	n=abs(n);					//取绝对值 
	if(n==0)					//等于0，则直接输出，并且结束程序 
	{
		printf("0");
		exit(0);
	}
	while(n!=0)					//反转继续循环 
	{
		s=s*10+n%10;			//乘10，空出个位，原数的个位即为新数的最高位 
		n/=10;					//整除10，也相当于删掉个位 
	}
	printf("%d\n",s);
	return 0;
}

//--------------------------------

//--------------------------------
