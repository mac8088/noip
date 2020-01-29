#include<iostream>
#include<cstdio>
using namespace std;
const double PI = 3.14159;
int main()
{
    double r, d, c, s;
    cin >> r;
    d = 2 * r;
    c = 2 * r * PI;
    s = r * r * PI;
    printf("%.4f %.4f %.4f", d, c, s);
    return 0;
}