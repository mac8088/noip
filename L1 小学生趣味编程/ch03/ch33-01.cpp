#include <iostream>
using namespace std;
int main()
{
	float max, x;
	int i;
	cout << "请输入第1个数：";
	cin >> x;
	max = x;
	i = 2;
	for(;i<=10;i++) 
	{
		cout << "请输入第" <<i<<"个数：";
		cin >> x;
		if(x>max) max=x;
	}
	cout << "最大的数：" << max; 
	return 0;
}

//请输入第1个数：98
//请输入第2个数：95
//请输入第3个数：94
//请输入第4个数：94
//请输入第5个数：96
//请输入第6个数：92
//请输入第7个数：91.5
//请输入第8个数：90
//请输入第9个数：100
//请输入第10个数：88
//最大的数：100

