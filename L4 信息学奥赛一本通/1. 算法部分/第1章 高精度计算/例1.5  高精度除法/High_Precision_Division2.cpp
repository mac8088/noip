#include <iostream>
#include <cstring>

using namespace std;

int a[101], b[101], c[101], d, i;

void init(int a[])
{
	string s;
	cin >> s;  // �����ַ��� 
	a[0] = s.length();  // ��a[0]�����ַ���s��λ�� 
	for(i=1; i<=a[0]; i++)
		a[i] = s[a[0]-i] - '0';  // ������sת��Ϊ����a�����ҵ������ 
}

void print(int a[])
{
	int i;
	if(a[0]==0) 
	{
		cout << 0 << endl;
		return;	
	} 
	for(i=a[0]; i>0; i--) cout << a[i];
	cout << endl;
	return;
}

// �Ƚ�a��b�Ĵ�С��ϵ����a>b��Ϊ1����a<b��Ϊ-1����a=b ��Ϊ0 
int compare(int a[], int b[])
{
	if(a[0] > b[0]) return 1;
	if(a[0] < b[0]) return -1;
	for(int i=a[0]; i>0; i--)
	{
		if(a[i] > b[i]) return 1;
		if(a[i] < b[0]) return -1;
	}
	return 0;
}

void jian(int a[], int b[])
{
	
}

void numcpy(int p[], int q[], int det)  // ����p���鵽q�����det��ʼ�ĵط� 
{
	
}

void chugao(int a[], int b[], int c[])
{
	
}

//�߾����˸߾��������ǵ��̺����� 
int main()
{
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	init(a); init(b);
	chugao(a, b, c);
	print(c);
	print(a);
	return 0;
}
