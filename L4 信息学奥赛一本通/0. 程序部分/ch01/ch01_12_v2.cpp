#include<cstdio>						//ʹ�� printf �� scanf ��������Ҫ����cstdio�� 
#include<cstdlib>						//ʹ��system()���� 
using namespace std;					//��C������ʡ�ԣ����磺VC++ and TC++ 
int main()								//���е�C�����п����ã�void main() 
{										//��������Ŀ�ʼ 
	float s,h,up,down;					//float�������ĸ���������Ϊ������ʵ�ͱ��� 
	scanf("%f", &up); 					//�����ϵ� 
	scanf("%f", &down); 				//�����µ�
	h=2*150/up;							//�����ϵ�������εĸ� 
	s=(up+down)*h/2;					//�������������ʽ�������� 
	printf("s=%0.2f\n",s);				//\n�ǻ��п��Ʒ��� 0.2f��ʵ�ʵ�������������ұ���2λС���� 
	system("pause");					//��ͣ���� 
	return 0;							//�������� 
}
