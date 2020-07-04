#include <iostream>
using namespace std;
/*
����2��
(1) �ݹ���ֹ������ gcd(m,n) == m 
(2) �ݹ��ϵʽ��
    m < n ʱ�� gcd(m, n) = gcd(n, m)
	m Ϊż���� n Ϊż����  gcd(m, n) = 2 * gcd(m/2, n/2) 
	m Ϊż���� n Ϊ������  gcd(m, n) = gcd(m/2, n)
	m Ϊ������ n Ϊż����  gcd(m, n) = gcd(m, n/2)
	m Ϊ������ n Ϊ������  gcd(m, n) = gcd(n, m-n)
	
�˷����ͷ���1��ȣ������ʺ���߾��ȵ����Լ������Ϊֻ�漰����2�ͼ���������
��շת���������Ҫ�߾��ȳ����� 
*/ 
int gcd(int m, int n)
{
	if(m==n) return m;
	if (m<n) return gcd(n,m);
	if(m%2==0)
	{
		if(n%2==0) return 2 * gcd(m/2, n/2);
		else return gcd(m/2, n);
	}
	else
	{
		if(n%2==0) return gcd(m, n/2);
		else return gcd(n, m-n);
	}
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n) << endl;
	return 0;
}
