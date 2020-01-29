#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    float r1,r2;
    cin>>r1>>r2;
    printf("%.2f\n",1/(1/r1+1/r2));
    return 0;
}