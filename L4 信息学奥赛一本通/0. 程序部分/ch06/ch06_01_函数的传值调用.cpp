#include <iostream>
using namespace std;

void swap1(int a, int b)
{
	int tmp = a; a = b; b = tmp;
}

//形参是传递地址 
void swap2(int &a, int &b)
{
	int tmp = a; a = b; b = tmp;
}


int main()
{
	int c = 1, d = 2;
	swap1(c, d);
	cout << c << ' '<< d << endl;
	swap2(c, d);  //交换变量 
	cout << c << ' '<< d << endl;
}
