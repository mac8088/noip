#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  double a,b,c,d,x;
  cin>> x >> a >> b >> c >> d;
  printf("%.7lf",a*x*x*x + b*x*x + c*x + d);
  return 0;
}