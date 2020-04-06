#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
double a, b, c, s, x, x1, x2;
int main()
{
	cin >> a >> b >> c;
	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);  // Real root1 
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);  // Real root2 
	s=-b/(2*a);  // real part 
	if(-b==0) s=0; 
	x = sqrt(4*a*c-b*b)/(2*a);  //imaginary part 
	if(b*b==4*a*c) printf("x1=x2=%.5lf",x1);
	else if(b*b> 4*a*c) printf("x1=%.5lf;x2=%.5lf",x1,x2);
	else if(b*b< 4*a*c) printf("x1=%.5lf+%.5fi;x2=%.5lf-%.5fi",s,x,s,x);
	else cout << "No answer!";
	return 0;
}

//1.0   2.0   8.0
//x1=-1.00000+2.64575i;x2=-1.00000-2.64575i
