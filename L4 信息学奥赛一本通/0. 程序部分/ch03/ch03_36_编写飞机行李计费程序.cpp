#include<cstdio>
using namespace std;
int main()
{
	float w, s;
	scanf("%f", &w);
	if(w <= 20)
	{
		s = w * 1.68;
		printf("%.2f\n", s);		//printf("%.2f\n", w * 1.68);
	} 
	else 
	{
		s = w * 1.98;
		printf("%.2f\n", s);		//printf("%.2f\n", w * 1.98);
	}
	return 0;
}


/*
	if�������Ƕ�ף������1�����2��������if��䡣
	if���ľͽ����ԭ��
	��if���Ƕ��ʱ��Լ��else���Ǻ������һ��if�����ԡ� 
	
	if(a>b)
	  if(b>c) y=a;
	  else y=c;
	  
	if(a>b)
	{
      if(b>c)  y =a;
	}
	else y =c;
	
*/
