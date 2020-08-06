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



void get(Node *head, int i)
{
	Node *p;
	int j;
	p=head->next;
	j=1;
	while(p!=NULL && j<i)
	{
		p=p->next;
		j++;
	}
	if(p!=NULL && j==i)
		cout << p->data;
	else 
		cout << "not exist!";
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
	
	//get i
	get(head, 3);
	return 0;
}


