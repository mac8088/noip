#include <cstdio>
#include <algorithm>
using namespace std;
int x, a, y, b;								//int定义a,b,x,y为整型变量 
double s1, s2, s3;							//double定义s1,s2,s3为双精度实型变量 
int main()
{
    scanf("%d%d%d%d",&x,&a,&y,&b);			//输入给定4个整数，注意"&"不能漏 
    s1 = x * a;	s2 = y * b;					//s1, s2 分别存储x亿人生活a年，y亿人生活b年各消耗的资源 
	s3 = (s2 - s1) / (b -a);				//计算地球最多能够养活的人数
    printf("%.2lf", s3);					//输出地球最多能够养活的人数，精确到小数点后两位 
    return 0;
}

//------------------------ 
//110 90 90 210
//75.00 
//------------------------ 

