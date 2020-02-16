#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	float sum= 0.0, prices[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
	int books[10] = {0};
	for (int i=0; i<10; i++)
		scanf("%d", &books[i]);
	for (int i=0; i<10; i++)
		sum += books[i] * prices[i];
	printf("%.1f", sum);
	return 0;
}
