#include <iostream>
using namespace std;
/*
 ��81�Σ�����ѡ�� 
  --ָ��������  
*/ 

const int MAX = 5;           //��ѡ�˵����� 
int count(int b[], int n)
{
	int x;
	for(int i=1; i<=n; i++)
	{
		do
		{
			cout << i << ":";
			cin >> x;
		} while(x < 0 || x > MAX);
		b[x]++;
	}
}
 
int main()
{
	int a[MAX+1], i, n, *p;   //a[0]ͳ����Ȩ��Ʊ��
	cout << "������ʵ��������";
	cin >> n;
	for(p=a; p<=(a+MAX); p++) 
		*p = 0;
	
	p = a;                    //ָ�����p����ָ��������Ԫ��
	count(p, n);
	for(i = 0; i<=MAX; i++) 
	{
		switch(i)
		{
			case 0:  cout << "��Ȩ��" << a[i] << endl; break;
			default: cout << i << " ��Ʊ���� " << a[i] << endl; break;
		}
	}
	return 0;
}

//--------------------------------
//������ʵ��������010
//1:3
//2:4
//3:5
//4:3
//5:2
//6:1
//7:4
//8:5
//9:5
//10:3
//��Ȩ��0
//1 ��Ʊ���� 1
//2 ��Ʊ���� 1
//3 ��Ʊ���� 3
//4 ��Ʊ���� 2
//5 ��Ʊ���� 3
//--------------------------------
