#include<iostream>
using namespace std;
#define INF 100000000 
int main()
{
	int x, n = 0, min = INF, max = -INF, sum = 0;
	//���������ʱ��scanf�޷��ٴζ��룬x������EOF 
	while(scanf("%d", &x) == 1)			//ѭ������һ����x 
	{
		sum += x;						//sum�洢��������֮�� 
		min = x < min ? x : min;
		max = x > max ? x : max;
		++n;							//n�洢���������ݵĸ��� 
	}
	//(double)ǿ��ת�� 
	printf("%d %d %.3lf\n", min, max, (double)sum/n);
	return 0;
}

//--------------------------------
//2
//8
//3
//5
//1
//7
//3
//6
//^Z
//1 8 4.375
//--------------------------------
