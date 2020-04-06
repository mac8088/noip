#include<cstdio>
using namespace std;
int main()
{
	double a,t1,t2;
	scanf("%lf",&a);
	t1=a/1.2;
	t2=a/3.0+27+23;
	if(t1<t2) printf("%s","Walk");
	else if(t1==t2) printf("%s","All");
	else printf("%s","Bike");
	return 0;
}
