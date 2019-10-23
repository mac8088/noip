#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int main()
{
	const int MAX = 10;
	srand(time(0));
	int m, n, countm, countn;
	countm = countn = 0;
	for(int i=0; i < MAX; i++)
	{
		m = rand()%3+1;  // 0, 1, 2 --> 1, 2, 3
		cout << "请你出招" << endl;
		cout << "1.剪刀 2.石头 3.布" << endl;
		cin >> n;
		if(n<1 || n>3)
			cout << "请输入1～3，此局无效！" << endl;
		else
		{
			switch(m-n)
			{
				case -2: 
				case 1:  cout << "计算机赢！" << endl; countm++; break;
				case 0:  cout << "平局！" << endl; break;
				default: cout << "你赢！" << endl; countn++; break;
			}
		} 
	}
	
	cout << "计算机赢：" << countm << endl;
	cout << "你赢：" << countn << endl;
	return 0;
}



