#include <cstdio>
#include <algorithm>
using namespace std;
int x,a,b,y;
int main()
{
    scanf("%d%d%d%d",&x,&a,&y,&b);						//int����a,b,x,yΪ���ͱ��� 
    printf("%.2lf",(b*y-a*x)*1.0/(1.0*(b-a)));			//�����������ܹ��������������ȷ��С�������λ 
    return 0;
}

//------------------------ 
//110 90 90 210
//75.00 
//------------------------ 
