#include<iostream>
using namespace std;
int main()
{
	float a, b, c, maxn;
	cin >> a >> b >> c;
	maxn = a;					//�ȼ���aΪ����� 
	if(b > maxn) maxn = b;		//maxnΪa, b������� 
	if(c > maxn) maxn = c;		//maxnΪa, b, c�������  
	cout << maxn << endl;
	return 0;
}
