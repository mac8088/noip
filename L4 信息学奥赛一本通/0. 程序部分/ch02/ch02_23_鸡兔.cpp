#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//�������輦Ϊjֻ����Ϊtֻ�� ͷΪh����Ϊf����ô�У�
	//j+t=30			��			
	//2*j+4*t=90 		��
    //����Сѧ�����м���ͬ�����Ĺ�ʽ��   
	//j=(4*h-f)/2		��
	//t=h-j				��
	
	int h,f,j,t;						//������� 
	h=30; f=90;							//����ֵ 
	j=(4*h-f)/2;						//���㼦��ֻ�� 
	t=h-j;								//�����õ�ֻ�� 
	cout<<"j="<<j<<" t="<<t<<endl;		//������ 
	getchar();	
}
