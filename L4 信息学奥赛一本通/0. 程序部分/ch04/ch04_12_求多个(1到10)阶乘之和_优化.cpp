#include<iostream>
using namespace std;
int main()
{
	int t = 1, s = 0;
	for(int i=1; i<=10; i++) 
	{
		t*=i;						//tΪ��һ������i-1�Ľ׳�ֵ���ٳ���i����Ϊ��i!
		s+=t; 
	}
	cout << s << endl;
	return 0;
}

//--------------------------------
//�ܹ�ѭ��10�� 
//4037913
//--------------------------------
