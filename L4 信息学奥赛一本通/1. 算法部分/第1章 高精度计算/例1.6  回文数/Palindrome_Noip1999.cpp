#include <iostream>
#include <cstring>

using namespace std;
int n, a[101], b[101], ans, i;

/**
����������
��һ��������λ��Ϊ�㣩�������Ҷ���������������һ�������Ǿͽ����֮Ϊ ������ 
 
�㷨������
n��������
1. ��ǰλ�淶�� 10% ��Ϊ n%
2. ��λ������ /10 ��Ϊ /n
3. ����������򲻱� 
*/

//������sת��Ϊ��������a 
void init(int a[])  
{
	string s;
	cin >> n >> s;  //����һ�� n ���� �� ����
	memset(a, 0, sizeof(a));  //����a����
	a[0] = s.length();  //��a[0]����ַ���s��λ��
	for(i=1; i<=a[0]; i++)
	{
		if(s[a[0]-i] >= '0' && s[a[0]-i] <= '9') 
			a[i]=s[a[0]-i] - '0';
		else
			a[i]=s[a[0]-i] - 'A' + 10;
	} 
}

//�ж���������a �Ƿ�Ϊ������ 
bool check(int a[])
{
	for(i=1; i<a[0]; i++)
		if(a[i] != a[a[0]-i+1]) return false; 
	return true;
}

//��������a���䷴����b ���� n ���� �ӷ����� 
void jia(int a[])
{
	int i, k;
	for(i=1;i<=a[0];i++) b[i] = a[a[0]-i+1];  //������
	for(i=1;i<=a[0];i++) a[i]+=b[i];          //��λ���
	for(i=1;i<=a[0];i++)                      //�����λ 
	{
		a[i+1] += a[i]/n;
		a[i]%=n;	
	} 
	if(a[a[0]+1] > 0) a[0]++;                 //�����µ�a��λ�� (a+b���ֻ�ܽ�һλ) 
}

int main()
{
	init(a);
	if(check(a)) { cout << 0 << endl; return 0;}
	ans = 0;  //������ʼ��Ϊ0
	while(ans <= 30)
	{
		ans++;
		jia(a);
		if(check(a)) { cout << ans << endl; return 0;}
	} 
	cout << "impossible";  // ����޽����Ϣ 
	return 0;
}

//�������� 
//10 87
//4



