#include<cstdio>
using namespace std;
// FILE *freopen(const char * filename, const char * mode, FILE * stream); 
int main()
{	
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int temp, sum=0;
	while(scanf("%d", &temp)==1)
	{
		sum+=temp;
	}
	printf("%d\n",sum);
	fclose(stdin);
	fclose(stdout);
	return 0;
}