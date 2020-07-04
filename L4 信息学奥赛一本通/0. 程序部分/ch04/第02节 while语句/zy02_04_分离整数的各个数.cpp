#include<iostream>
using namespace std;
int main()
{
	int n, b, c;
	cin >> n;
	while(n!=0)			//还未全部分离便继续循环 
	{
		cout << n%10 << " ";		//输出个位数，用空格分隔 
		n/=10;						//整除10，也相当于删除个位，缩小10呗，之后原来的十位变成个位。 
	}
	cout << endl;
	return 0;
}

//--------------------------------

//--------------------------------
