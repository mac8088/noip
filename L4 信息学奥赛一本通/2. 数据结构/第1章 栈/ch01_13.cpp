#include <iostream> 
using namespace std;
const int N = 1010;
int stack[N], a[N];
int top, n;
int main()
{
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	top =0;
	for(int i=1, cur=1; i<=n; ++i)
	{
		while(cur<=a[i])
			stack[++top] = cur++;
		if(stack[top] == a[i])
			--top;
		else
		{
			cout << "NO"<< endl;
			return 0;
		}
	}
	cout << "YES"<< endl; 
	return 0;
}

//5
//5 4 3 2 1
//YES

//6
//4 3 5 6 1 2
//NO
