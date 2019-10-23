#include <iostream>
using namespace std;
/*
 第81课，民主选举 
  --指针与数组  
*/ 

const int MAX = 5;           //候选人的人数 
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
	int a[MAX+1], i, n, *p;   //a[0]统计弃权的票数
	cout << "请输入实到人数：";
	cin >> n;
	for(p=a; p<=(a+MAX); p++) 
		*p = 0;
	
	p = a;                    //指针变量p重新指向数组首元素
	count(p, n);
	for(i = 0; i<=MAX; i++) 
	{
		switch(i)
		{
			case 0:  cout << "弃权：" << a[i] << endl; break;
			default: cout << i << " 号票数： " << a[i] << endl; break;
		}
	}
	return 0;
}

//--------------------------------
//请输入实到人数：010
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
//弃权：0
//1 号票数： 1
//2 号票数： 1
//3 号票数： 3
//4 号票数： 2
//5 号票数： 3
//--------------------------------
