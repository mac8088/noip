#include<cstdio>
using namespace std;
int main()
{
	int weight = 0; 
	char flag = 'n';
	int money = 0;
	scanf("%d %c",&weight, &flag);
	if(flag == 'y') money = 5;
	
	if(weight<=1000)
		money += 8;
	else
	{
		int fen  = 0;
		if ((weight - 1000) % 500 == 0) 
			fen = (weight - 1000) / 500;
		else 
		{
			fen = (weight - 1000) / 500;
			fen++;
		}
		money += (8 + fen *4);
	} 
	printf("%d", money);
	return 0;
}