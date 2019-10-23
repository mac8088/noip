#include <iostream>
using namespace std;
/*
 第81课，民主选举 
  --指针与数组 
  --风之巅小学每学年都要对语文、数学、英语、科学
  四门功课进行期末测试，请编写一个程序帮助尼克算总分。 
*/ 
 
int main()
{
	int a[4], i, sum, *p;
	sum = 0;
	for(i=0; i<4; i++)
		cin >> a[i];
	
	for(p=a; p<(a+4); p++)
		sum +=*p;
		
	cout << sum << endl;
	return 0;
}

//--------------------------------
//输入：
//输出： 
//--------------------------------
