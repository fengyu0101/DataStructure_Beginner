#include <cstdio>
#include <crtdbg.h>
#include <corecrt_malloc.h>
typedef int datatype;

typedef struct node
{
	datatype data;
	struct node* next;
}Node,*LoopChainList;//Each node is a pointer, not a simple variable.（每个节点都是一个指针，而不是一个简单的变量。）

LoopChainList CreateListT(int n) {
	Node* L= (Node*)malloc(sizeof(Node));
	L->next = NULL;
	L->data = n;
	Node*r= (Node*)malloc(sizeof(Node));
	r = L;//At this time, the address of L is given to r, and in the first loop r->next=p; It is equivalent to changing L->next, at this time L will not change, only the variable it points to, r is only the responsibility of changing the value.(这时把L的地址给了r，在第一次的循环中r->next=p;就相当于改变了L->next，这时候L已经不会改变了，改变的只是它所指向的变量，r只是代行改变值的职责。)
	for (int i = 0; i < n; i++)
	{
		Node *p= (Node*)malloc(sizeof(Node));
		printf("Enter the new node data in turn:");
		scanf_s("%d", &p->data);
		p->next =NULL;
		r->next = p;
		r = p;
	}
	r->next = L->next;
	return L;
}

void DeleteNode(LoopChainList &list, int n) {
	if (list == NULL) { printf("ERROR"); return; }
	Node* p = (Node*)malloc(sizeof(Node));
	p = list->next;
	for (int j = 1;j < n;j++) {
		p = p->next;
	}
	Node* q=(Node*)malloc(sizeof(Node));
	q = p->next;
	p->next = q->next;
	delete(q);
}

void Josephus(LoopChainList list,int m) {
	Node* p = (Node*)malloc(sizeof(Node));
	p = list->next;
	for (int i = 0; i <list->data-2 ; i++)
	{
		for (int j = 0;  j < m-2;  j++)
		{
			p = p->next;
		}
		Node* q = (Node*)malloc(sizeof(Node));
		q = p->next;
		printf("%d", q->data);
		p->next = q->next;
		delete(q);
		p = p->next;
	}
	printf("The value of the remaining number is %d", p->data);
}

int main() {
	LoopChainList list=CreateListT(8);
	Josephus(list, 3);

	return 0;
}