#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=1; i<=20; i++)
	{
		//语句块
		cout << i << ' ';
		//2的倍数 
		if(i%2==0) cout << "叮叮";
		//3的倍数 
		if(i%3==0) cout << "当当";
		//如果一个数既是2的倍数也是3的倍数，则输出换行 
		if(i%2==0 || i%3==0) cout << endl;
	}
	return 0;
}
