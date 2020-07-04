#include<cstdio>
using namespace std;
int main()
{
	long a, b;
	scanf("%ld%ld", &a, &b);
	//恰好一门不及格的！！！ 
	if(a<60 && b>=60 || b<60 && a>=60) printf("1");
	else printf("0");
	return 0; 
}

//--------------------------------

//--------------------------------
