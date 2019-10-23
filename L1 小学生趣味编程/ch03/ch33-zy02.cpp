#include <iostream>
using namespace std;
int main()
{
	float min, x;
	int i, n;
	cout << "n=";
	cin >> n;
	cout << "请输入第1个数：";
	cin >> x;
	min = x;
	for(i=2;i<=n;i++)
	{
		cout << "请输入第"<<i<<"个数：";
		cin >> x;
		if(x<min) min=x;	
	}
	cout << "最小的数是：" << min;
	return 0;
}


