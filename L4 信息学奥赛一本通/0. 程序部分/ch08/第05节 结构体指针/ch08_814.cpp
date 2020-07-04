#include <cstdio>
using namespace std;
struct student
{
	char name[20];
	char sex;
	int score;
};

student s[3] = {
	{"xiaoming", 'f', 356},
	{"xiaoliang", 'f', 350},
	{"xiaohong", 'm', 0}
};

int main()
{
	student *p;
	printf("Name     Sex    Score\n");
	for(p=s; p<s+3;++p) // p++ move the pointer
		printf("%-9s%3c%7d\n", p->name, p->sex, p->score);
	return 0;
}