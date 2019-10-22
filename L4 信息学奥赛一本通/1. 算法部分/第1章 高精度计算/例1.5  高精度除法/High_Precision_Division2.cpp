#include <iostream>
#include <cstring>

using namespace std;

int a[101], b[101], c[101], d, i;

void init(int a[])
{
	string s;
	cin >> s;  // 读入字符串 
	a[0] = s.length();  // 用a[0]计算字符串s的位数 
	for(i=1; i<=a[0]; i++)
		a[i] = s[a[0]-i] - '0';  // 将数串s转换为数组a，并且倒序输出 
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

// 比较a和b的大小关系，若a>b则为1；若a<b则为-1；若a=b 则为0 
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

void numcpy(int p[], int q[], int det)  // 复制p数组到q数组从det开始的地方 
{
	
}

void chugao(int a[], int b[], int c[])
{
	
}

//高精除了高精，求它们的商和余数 
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
