#include <iostream>
using namespace std;
/*
 第81课，民主选举 
  --指针与数组 
  --作业01 
*/ 

void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
} 
 
int main()
{
	int a[2], *p;
	cin >> a[0] >> a[1];
	p = &a[0];
	swap(p, p+1);
	cout << *(p+1) << endl;
	return 0;
}

//--------------------------------
//输入：10  20
//输出：10 
//--------------------------------
