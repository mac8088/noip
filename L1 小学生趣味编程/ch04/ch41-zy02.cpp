#include <iostream>
using namespace std;
/*
 第41课，蜗牛与葡萄树 
 --死循环 
 求风之巅小学某次信息学比赛同学们的平均分，
 以-1表示结束。 
*/  
int main()
{
	int i = 0;
	float n, pjfen, sum = 0.0;
	cin >> n;
	while(n != -1)  //-1相当于条件不成，所以不是死循环。 
	{
		i++;
		sum += n;
		cin >> n;
	}
	
	//data check for div operation. 
	if(i != 0)
	{
		pjfen = sum / i;
		cout << "平均分" << pjfen;	
	}
	return 0;
}
