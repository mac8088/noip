#include <cstdio>
#include <algorithm>
using namespace std;
int x,a,b,y;
int main()
{
    scanf("%d%d%d%d",&x,&a,&y,&b);						//int定义a,b,x,y为整型变量 
    printf("%.2lf",(b*y-a*x)*1.0/(1.0*(b-a)));			//输出地球最多能够养活的人数，精确到小数点后两位 
    return 0;
}

//------------------------ 
//110 90 90 210
//75.00 
//------------------------ 
