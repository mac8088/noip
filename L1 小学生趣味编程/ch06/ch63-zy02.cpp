#include <iostream>
using namespace std;
/*
 第63课，老鹰捉小鸡 
  循环移位
  作业02 
*/ 
int main()
{
	//a[0] 代表狐狸老师，钥匙用-1表示。 
	int a[6] = {4,3,-1,5,1,2};
	int i;
	cout << "老师";
	i = a[0];
	do
	{
		cout << "--->" << i;
		i = a[i];	
	} while(i != -1);
	cout << endl;
	cout << "钥匙找到了！ " << endl;
	return 0;
}

//--------------------------------
//老师--->4--->1--->3--->5--->2
//钥匙找到了！
//--------------------------------
