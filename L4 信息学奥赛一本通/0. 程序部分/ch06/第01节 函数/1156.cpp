#include <cstdio>
#include <cmath>
using namespace std;
double ax(double x)
{
	int i=1;
	double s = 0.0, t=x;
	while(abs(t/i)>=1e-6)
	{
		s+=t/i;
		t=-1*x*x*t;   // t = -x3, x5, -x7
		i+=2;
	}
	//s+=t/i;
	return s;
}

int main()
{
	double a = ax(1/sqrt(3));
	double pi = 6*a;   // according formula 2, get PI.
	printf("%.10lf", pi);
	return 0;
}

//3.1415905109

