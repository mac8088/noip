#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=1; i<=20; i++)
	{
		//����
		cout << i << ' ';
		//2�ı��� 
		if(i%2==0) cout << "����";
		//3�ı��� 
		if(i%3==0) cout << "����";
		//���һ��������2�ı���Ҳ��3�ı�������������� 
		if(i%2==0 || i%3==0) cout << endl;
	}
	return 0;
}
