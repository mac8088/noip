#include<iostream>
using namespace std;
int main()
{
	float a, b, c, maxn;
	cin >> a >> b >> c;
	if(a>b && a>c) maxn=a;			//�ж�a�Ƿ���� 
	else if(b>a && b>c) maxn=b;		//�ж�b�Ƿ���� 
	else maxn = c;
	cout << maxn << endl;
	return 0;
}


//--------------------------------
//3.4 67.4 23.12
//67.4
//--------------------------------
