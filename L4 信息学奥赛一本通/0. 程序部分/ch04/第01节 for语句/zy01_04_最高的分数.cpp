#include<cstdio>
using namespace std;
int main()
{
	long n, t, max = -1000000;				//max存储了考试中取得最高成绩，初始值是-1000000 
	scanf("%ld", &n);						//输入人数				
	for(int i=1; i<=n; i++)					//输入所有成绩，找到最高分数 
	{
		scanf("%ld", &t);
		if(t>max) max=t; 
	}
	printf("%ld\n", max);
	return 0;
}

//--------------------------------
//5
//85 78 90 99 60
//99
//--------------------------------
