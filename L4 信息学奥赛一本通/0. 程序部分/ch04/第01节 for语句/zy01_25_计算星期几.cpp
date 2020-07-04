#include<cstdio>
using namespace std;
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	int n = 1;						//使n的初始值为1 
	for(int i=1; i<=b; i++)
		n=n*a%7;					//每次都取余避免值太大 
		
	switch(n)						//求是星期几 
	{
		case 0: printf("Sunday"); break;			//若是没有余数，则为星期日 
		case 1: printf("Monday"); break;			//若是余一，则为星期一 
		case 2: printf("Tuesday"); break;			//依次类推 
		case 3: printf("Wednesday"); break;
		case 4: printf("Thursday"); break;
		case 5: printf("Friday"); break;
		case 6: printf("Saturday"); break;
	}
	return 0;
}

//--------------------------------

//--------------------------------
