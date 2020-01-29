#include <stdio.h>
using namespace std;
int main() {
    int e;
    float money = 0.0f;
    scanf("%d",&e);
    if(e <= 150) 
    	money = e * 0.4463;
	else
	{
		if (e <= 400)
			money = 150 * 0.4463 + (e - 150) * 0.4663;
		else 
			money = 150 * 0.4463 + (400 - 150) * 0.4663 + (e - 400) * 0.5663;
	}
    printf("%.1f", money);
    return 0;
}
