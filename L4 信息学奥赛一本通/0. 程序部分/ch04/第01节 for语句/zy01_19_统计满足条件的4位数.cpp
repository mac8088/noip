#include<cstdio>
using namespace std;
int main()
{
	int n, m, s = 0;			//s存储满足条件数的总数，初始值为0 
	int qian, bai, shi, ge;
	scanf("%d", &n);			//读入样本数的大小 
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &m);		//循环读入一个四位数 m
		qian = m /1000;
		bai = (m/100)%10;
		shi = (m/10) %10;
		ge = m%10;
		if(ge - qian - bai - shi > 0) s++; //满足条件，s累加 
	}
	printf("%d\n", s);
	return 0;
}

//--------------------------------
//5
//1234 1349 6119 2123 5017
//3
//--------------------------------
