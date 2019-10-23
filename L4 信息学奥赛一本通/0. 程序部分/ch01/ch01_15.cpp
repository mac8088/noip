#include<iostream>						//使用cin,cout函数，需要调用iostream库 
using namespace std;
int main()
{
	char a;								//定义字符变量 
	cin>>a;								//输入给定的一个字符 
	cout<<"  "<<a<<endl;				//先输出2个空格，输出1个字符 
	cout<<" "<<a<<a<<a<<endl;			//先输入1个空格，输出3个字符 
	cout<<a<<a<<a<<a<<a<<endl;			//输出5个空格 
	return 0;
}

//--------------------
//  *
// ***
//*****
//--------------------
