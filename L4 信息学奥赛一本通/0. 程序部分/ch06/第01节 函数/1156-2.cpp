#include<cstdio>
#include<cmath>
using namespace std;
double ax(double x)
{
	double s=0.0, t=x;
	int i=1;
	while(fabs(t/i)>=1e-6)
	{
		s+=t/i;
		t=-1*x*x*t;
		i+=2;
	}
	return s;
}
int main()
{
	double pi,a;
	a=1/sqrt(3);
	pi=6*(ax(a));
	printf("%.10lf",pi);
	return 0;
}

//3.1415905109
