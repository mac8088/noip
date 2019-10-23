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
	if(a[0]==0) {cout << 0 << endl; return;} 
	for(i=a[0]; i>0; i--) cout << a[i];
	cout << endl;
	return;
}

// �Ƚ�a��b�Ĵ�С��ϵ����a>b��Ϊ1����a<b��Ϊ-1����a=b ��Ϊ0 
int compare(int a[], int b[])
{
	if(a[0] > b[0]) return 1;
	if(a[0] < b[0]) return -1;
	for(int i=a[0]; i>0; i--)  // �Ӹ�λ����λ�Ƚ� 
	{
		if(a[i] > b[i]) return 1;
		if(a[i] < b[i]) return -1;
	}
	return 0;  //��λ�������������� 
}

void jian(int a[], int b[])
{
	int flag, i;
	flag = compare(a, b);  // ���ñȽϺ����жϴ�С 
	if(flag==0) {a[0] = 0; return;} // ��� 
	if(flag==1)  // ���� 
	{
		for(i=1;i<=a[0];i++)
		{
			if(a[i]<b[i]) { a[i+1]--; a[i]+=10; }  // �������������Ͻ�һλ
			a[i]-=b[i];	
		} 
		while(a[0]>0 && a[a[0]]==0) a[0]--; // ����a��λ�� 
		return;
	}
}

void numcpy(int p[], int q[], int det)  // ����p���鵽q�����det��ʼ�ĵط� 
{
	for(int i=1; i<=p[0]; i++) q[i+det-1] = p[i]; 
	q[0] = p[0] + det - 1;
}

void chugao(int a[], int b[], int c[])
{
	int i, tmp[101];
	c[0] = a[0] - b[0] + 1;
	for(i=c[0]; i>0; i--)
	{
		memset(tmp, 0 , sizeof(tmp));  // �������� 
		numcpy(b, tmp, i);
		while(compare(a, tmp)>=0) { c[i]++; jian(a, tmp); }  // �ü�����ģ�� 
	}
	while(c[0]>0 && c[c[0]]==0) c[0]--;
	return; 
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
