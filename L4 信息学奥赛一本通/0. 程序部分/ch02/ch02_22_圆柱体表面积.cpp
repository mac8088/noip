#include<iostream>
using namespace std;
int main()
{
	const double pi=3.1415926;			//����piΪ˫����ʵ������ 
	double r,h,s1,s2,s;					//����˫����ʵ��
	scanf("%lf%lf",&r,&h);				//r��hǰ���&���Ų���©����double������%lf 
	s1=pi*r*r;							//�������� 
	s2=2*pi*r*h;						//�������� 
	s=2*s1+s2;							//�����ܵı���� 
	printf("Area=%.3lf\n",s);			//��ʽ�������������λС����ע����lf��ʽ 
	return 0;
}

//--------------------------------
//3.5 9
//Area=274.889
//--------------------------------
