#include <iostream>
#include <cstring>

using namespace std;
int n, a[101], b[101], ans, i;

/**
问题描述：
若一个数（首位不为零）从左向右读与从右向左读都是一样，我们就将其称之为 会文数 
 
算法分析：
n进制运算
1. 当前位规范由 10% 改为 n%
2. 进位处理有 /10 改为 /n
3. 其他运算规则不变 
*/

//将数串s转化为整数数组a 
void init(int a[])  
{
	string s;
	cin >> n >> s;  //读入一个 n 进制 的 数串
	memset(a, 0, sizeof(a));  //数组a清零
	a[0] = s.length();  //用a[0]存放字符串s的位数
	for(i=1; i<=a[0]; i++)
	{
		if(s[a[0]-i] >= '0' && s[a[0]-i] <= '9') 
			a[i]=s[a[0]-i] - '0';
		else
			a[i]=s[a[0]-i] - 'A' + 10;
	} 
}

//判断整数数组a 是否为回文数 
bool check(int a[])
{
	for(i=1; i<a[0]; i++)
		if(a[i] != a[a[0]-i+1]) return false; 
	return true;
}

//整数数组a与其反序数b 进行 n 进制 加法运算 
void jia(int a[])
{
	int i, k;
	for(i=1;i<=a[0];i++) b[i] = a[a[0]-i+1];  //反序数
	for(i=1;i<=a[0];i++) a[i]+=b[i];          //逐位相加
	for(i=1;i<=a[0];i++)                      //处理进位 
	{
		a[i+1] += a[i]/n;
		a[i]%=n;	
	} 
	if(a[a[0]+1] > 0) a[0]++;                 //修正新的a的位数 (a+b最多只能进一位) 
}

int main()
{
	init(a);
	if(check(a)) { cout << 0 << endl; return 0;}
	ans = 0;  //步数初始化为0
	while(ans <= 30)
	{
		ans++;
		jia(a);
		if(check(a)) { cout << ans << endl; return 0;}
	} 
	cout << "impossible";  // 输出无解的信息 
	return 0;
}

//输入和输出 
//10 87
//4



