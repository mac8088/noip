#include <iostream>
#include <iomanip>

const int n = 10;
using namespace std;
int a[n];

int main()
{
	cout << "read " << n << " datas " << endl;
	for (int i=0; i<n; ++i) cin >> a[i];
	int temp = a[0];  //�ݴ��һ���� 
	for(int i=0; i<n-1; ++i) a[i] = a[i+1];  //������ǰ�ƶ�
	a[n-1] = temp; //��һ�����ŵ�����λ�� 
	cout << "result: " << endl;
	for(int i=0; i<n; ++i) cout << setw(3) << a[i]; 
	return 0;
}


//read 10 datas
//12 34 55 1 2 3 4 56 67 89
//result:
//34 55  1  2  3  4 56 67 89 12
