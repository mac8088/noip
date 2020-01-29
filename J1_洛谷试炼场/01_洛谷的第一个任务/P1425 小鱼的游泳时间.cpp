#include <stdio.h>
using namespace std;
int main() {
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=c-a;
    int y=d-b;
    if(y<0)
    {
    	x--;
    	y+=60;
	}
    printf("%d %d", x, y);
    return 0;
}
