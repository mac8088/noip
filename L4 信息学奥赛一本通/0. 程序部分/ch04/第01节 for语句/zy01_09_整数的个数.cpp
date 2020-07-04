#include<cstdio>
using namespace std;
int main()
{
	int n, t, x = 0, y = 0, z = 0;		//x存储1出现的次数，y存储5出现的次数，z存储10出现的次数 
	scanf("%d", &n);					
	for(int i=1; i<=n; i++)				//读入n个正整数 
	{
		scanf("%d", &t);
		if(t==1)  ++x;					//如果是1，x累加 
		if(t==5)  ++y;					//如果是5，y累加 
		if(t==10) ++z;					//如果是10，z累加 
	}
	printf("%d\n%d\n%d\n", x, y, z);
	return 0;
}

//--------------------------------
//5
//1 5 8 10 5
//1
//2
//1
//--------------------------------
