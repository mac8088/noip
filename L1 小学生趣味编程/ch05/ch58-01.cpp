#include <iostream>
#include <iomanip>
using namespace std;
/*
 第58课，百鸡百钱 
 三重循环的应用 
*/ 
int main()
{
	int xiaoji = 31; 
	
	cout << xiaoji / 3 << endl;    //整数除整数，结果为整数 
	cout << xiaoji / 3.0 << endl;  //整数除带有小数点的数（浮点数），结果为10.3333
	
	int xj_qian = xiaoji / 3.0;
	cout << xj_qian << endl;   // 自动舍弃，转化成整数 
	
	return 0;
}

//--------------------------------

//--------------------------------
