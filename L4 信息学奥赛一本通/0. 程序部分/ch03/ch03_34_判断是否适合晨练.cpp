#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	if(t>=25 && t<=30)
		cout << "ok!" << endl;
	else
		cout << "no!" << endl;
	return 0;
}

/*
	if(条件表达式)
	{
		语句1；
		语句2； 
	} else {
		语句1；
		语句2； 
	} 
	//若条件成立时，要执行的操作由多个句子构成，
	//我们必须把这些句子括在一对花括号{}内，也就是语句块或者复合语句。 
	//书写时候：左右花括号要对齐，组成语句块的各语句要相对花括号缩进一层！！ 
*/
