#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double n, s;
	scanf("%lf",&n);
	s = pow(2,n);			//计算2的n次方，结果是双精度实数
	printf("%.0lf%",s);		//精确到个位 
	return 0; 
}

//--------------------------------
//3
//8 
//--------------------------------
