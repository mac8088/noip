#include <iostream>
#include <iomanip>
using namespace std;
/*
 ��56�Σ��žų˷��� 
 ˫��ѭ����Ӧ�� 
 ��ҵ02, ���Ƴ���������9/99����1/1��1/2��2/2��.....�����ڵڼ�λ�� 
*/ 
int main()
{
	int i,j,ans;
	ans=0;
	for(i=1;i<=99;i++) 
		for(j=1;j<=i;j++)
		{
			ans++;
			if(i==99&&j==9) break;
		}
	cout << ans << endl;	
	return 0;
}

//--------------------------------
//4860
//--------------------------------
