#include <cstdio>
#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head, *p, *r;  // r is rail pointer
int x;

void output()
{
	//iterate each node
	p=head->next;
	while(p->next!=NULL)
	{
		cout << p->data << " ";
		p=p->next;
	}
	//output data segement for the last node or using: do-while
	cout << p->data<<endl;  	
}

bool find(int x)
{
	p = head->next;
	while(p->data!=x && p->next !=NULL)
	{
		p=p->next;
	}
	return (p->data==x);
}

int main()
{
	cin >> x;
	head = new Node;
	r=head;
	while(x!=-1)
	{
		p = new Node;
		p->data = x;
		p->next = NULL;
		r->next = p;
		r=p;
		cin >> x;
	}

	// output linked list
	output();
	
	// find the number
	int target = 0;
	cout << "enter one number to find:" << endl;
	cin >> target;
	bool result = find(target);
	cout << (result ? "found " : "not found" ) << target << endl;
	system("pause");
	return 0;
}


