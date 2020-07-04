#include<cstdio>
using namespace std;
int main()
{
	int n = 1;
	double s =1, k;
	scanf("%lf", &k);
	while(s<=k)				//when Sn > k 条件还没有达成便继续循环 
	{
		++n;				//累加n的值 
		s+=1.00/n;			//实数除法用1.00 
	}
	printf("%d", n); 
	return 0;
}

//--------------------------------
//级数求和： 
//1
//2
//--------------------------------
