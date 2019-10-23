#include <iostream>
using namespace std;
/*
description: 
格莱尔买来30根骨头，第一天吃掉一半后又吃了一根， 
第二天吃掉一半后又吃了一根，第三天仍然如此。 
问第三天吃完后还剩下多少根骨头？ 
output:
2
*/
int main() {
	int n = 30;
	n = n/2 -1;  //14 
	n = n/2 -1;  //6 
	n = n/2 -1;  //2 
	cout << "第三天吃完后还剩下 = " << n  << endl;
	return 0; 
}
