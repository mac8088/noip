#include <iostream>
using namespace std;
/*
 第45课，蝴蝶效应 
 --双精度实数double以及科学计数法 
*/ 
int main()
{
	int n, i;
	double n1, n2;
	n = 1;
	n1 = n - 0.01;  //0.99
	n2 = n + 0.01;  //1.01
	cout << "  " << n1;
	cout << "  " << n2 << endl;
	i = 1;
	while(i<=15)
	{
		n1*=n1;
		n2*=n2;
		cout << i << "  " << n1 << "  " << n2 << endl;
		i++;
	} 
	return 0;
}

//--------------------------------
//   0.99  1.01
//1  0.9801  1.0201
//2  0.960596  1.0406
//3  0.922745  1.08286
//4  0.851458  1.17258
//5  0.72498  1.37494
//6  0.525596  1.89046
//7  0.276252  3.57385
//8  0.076315  12.7724
//9  0.00582398  163.134
//10  3.39187e-005  26612.6
//11  1.15048e-009  7.08229e+008
//12  1.3236e-018  5.01588e+017
//13  1.75192e-036  2.5159e+035
//14  3.06922e-072  6.32977e+070
//15  9.42012e-144  4.0066e+141
//--------------------------------
