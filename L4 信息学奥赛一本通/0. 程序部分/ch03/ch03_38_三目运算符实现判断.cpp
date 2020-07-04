#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	//使用三目运算符可以代替if-else语句。 
	int c = a > b ? a : b; 
	cout << c << endl;
	return 0;
}

/*
	从可读性来说，条件操作符最适合于简单关系和简单表达式的值： x = (a > b) ? a : b;
	当代码变得更复杂的时候，使用if-else语句表达更为清晰。 
	三目的嵌套： x = a > b ? (c > b ? e: f) : g;
*/
