#include <iostream>
using namespace std;
/*
 ��62�Σ�׽�Բ� 
  --����Խ�� 
  ��ҵ01 
*/ 
int main()
{
	int i, a[10], ans;
	for(i=0;i<10;i++)
	{
		a[i] = i;
	}
	
	for(i=1;i<10;i++)
	{
		a[0] += a[i]; 
	}
	
	ans = a[0];
	cout << ans << endl;
	return 0;
}

//--------------------------------
//45
//--------------------------------
