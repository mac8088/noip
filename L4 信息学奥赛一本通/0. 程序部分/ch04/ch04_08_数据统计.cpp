#include<iostream>
using namespace std;
int main()
{
	int x, n = 0, min, max, sum = 0;
	//���������ʱ��scanf�޷��ٴζ��룬x������EOF 
	while(scanf("%d", &x) == 1)			//ѭ������һ����x 
	{
		sum += x;						//sum�洢��������֮�� 
		min = x < min ? x : min;
		max = x > max ? x : max;
		++n;							//n�洢���������ݵĸ��� 
	}
	printf("%d %d %.3lf\n", min, max, (double)sum/n);    //(double)ǿ��ת�� 
	return 0;
}

//--------------------------------
//2 8 3 5 1 7 3 6
//^Z   ��windows�£�������Ϻ��Ȱ�Enter�����ٰ�Ctrl+z�����Enter�����ɽ��� 
//1 8 4.375
//--------------------------------
