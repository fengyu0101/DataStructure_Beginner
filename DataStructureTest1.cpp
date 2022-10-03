#include <iostream>
using namespace std;
typedef int datatype;

typedef struct node
{
	datatype data;
	struct node* next;
}Node, * ChainList;

void sort(ChainList &L,Node *p) {
	if (L->next == NULL) { 
		p->next = L->next;
		L->next = p;
	}
	else {
		Node *temp = new Node;
		temp = L;
		if (p->data <= temp->next->data) {
			p->next = temp->next;
			temp->next = p;
			return;
		}
		while (temp->next != NULL) {
			temp = temp->next;
			if (temp->next == NULL) {
				p->next = temp->next;
				temp->next = p;
				break;
			}
			if (p->data > temp->data && p->data <= temp->next->data) {
				p->next = temp->next;
				temp->next = p;
				break;
			}
		}
	}
}
ChainList CreatNode(int n) {
	ChainList L = new Node;
	L->next = NULL;
	for (int i = 0;i < n;i++) {
		Node* p = new Node;
		cin >> p->data;
		sort(L,p);
	}
	return L;
}

ChainList CombineList(ChainList &a,ChainList &b) {
    ChainList c;
    Node* p = a->next; //p指向表a当前要判断的节点
    Node* q = b->next; //q指向表b当前要判断的节点
    Node* r; //r指向表c的尾节点
    Node* s; //临时保存指针p或q，可以通过直接操作s，来操作未进行后移的指针p或q
    c = a;
    c->next = NULL;
    r = c;
    free(b);
    while (p && q)
    {
        if (p->data < q->data)
        {
            s = p;
            p = p->next;
        }
        else if (p->data > q->data)
        {
            s = q;
            q = q->next;
        }
        else 
        {
            s = q;
            q = q->next;
            p = p->next;
        }
        s->next = r->next; 
        r->next = s;
        r = r->next; 
    }
    if (p) 
        r->next = p;
    else
        r->next = q;
    return c;
}

void display(ChainList L) {
	Node* p = new Node;
	p = L->next;
	while (p!= NULL) {
		cout << p->data << "  ";
		p = p->next;
	}
}

int main() {
	cout << "请输入链表a："<<endl;
	ChainList a = CreatNode(4);
	cout << "请输入链表b："<<endl;
	ChainList b = CreatNode(5);
	ChainList c = CombineList(a, b);
	display(c);
	return 0;
}