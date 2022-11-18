
//#include <iostream>
//#include <fstream>
//using namespace std;
//typedef int datatype;
//
//typedef struct node
//{
//	datatype data;
//	struct node* next;
//}Node, * ChainList;
//
////void sort(ChainList &L,Node *p) /* 建立对进程进行优先级排列函数*/
////{
////    Node* first, * second;
////    int insert = 0;
////    if ((L ->next== NULL) || ((p->data) < (L->next->data))) /*优先级最大者,插入队首*/
////    {
////        p->next = L->next;
////        L->next = p;
////    }
////    else /* 进程比较优先级,插入适当的位置中*/
////    {
////        first = L->next;
////        second = first->next;
////        while (second != NULL)
////        {
////            if ((p->data) < (second->data)) /*若插入进程比当前进程优先数大,*/
////            {                                 /*插入到当前进程前面*/
////                p->next = second;
////                first->next = p;
////                second = NULL;
////                insert = 1;
////            }
////            else /* 插入进程优先数最低,则插入到队尾*/
////            {
////                first = first->next;
////                second = second->next;
////            }
////        }
////        if (insert == 0)
////            first->next = p;
////    }
////}
//
//void sort(ChainList& L, Node* p) {//每创建一个新的节点，就把它插入到链表的合适位置，从小到大
//	if (L->next == NULL) { //当无节点时
//		p->next = L->next;
//		L->next = p;
//	}
//	else {
//		Node* temp = new Node;
//		temp = L;
//		if (p->data <= temp->next->data) {//当只有一个节点时
//			p->next = temp->next;
//			temp->next = p;
//			return;
//		}
//		while (temp->next != NULL) {
//			temp = temp->next;
//			if (temp->next == NULL) {//当应该插入到最末尾时
//				p->next = temp->next;
//				temp->next = p;
//				break;
//			}
//			if (p->data > temp->data && p->data <= temp->next->data) {//插入中间某个位置
//				p->next = temp->next;
//				temp->next = p;
//				break;
//			}
//		}
//	}
//}
//ChainList CreatNode(int n) {
//	ChainList L = new Node;
//	L->next = NULL;
//	for (int i = 0;i < n;i++) {
//		Node* p = new Node;
//		cin >>  p->data;
//		sort(L,p);
//	}
//	return L;
//}
//
//ChainList CombineList(ChainList &a,ChainList &b) {
//    ChainList c;
//    Node* p = a->next; //p指向表a当前要判断的节点
//    Node* q = b->next; //q指向表b当前要判断的节点
//    Node* r; //r指向表c的尾节点
//    Node* s; //临时保存指针p或q，可以通过直接操作s，来操作未进行后移的指针p或q
//    c = a;
//    c->next = NULL;
//    r = c;
//    free(b);
//    while (p && q)
//    {
//        if (p->data < q->data)
//        {
//            s = p;
//            p = p->next;
//        }
//        else if (p->data > q->data)
//        {
//            s = q;
//            q = q->next;
//        }
//        else 
//        {
//            s = q;
//            q = q->next;
//            p = p->next;
//        }
//		if (s->data == r->data) {
//			continue;
//		}
//        s->next = r->next; 
//        r->next = s;
//        r = r->next; 
//		
//    }
//	if (p) {
//		while (p != NULL && p->data <= r->data)
//			p = p->next;
//		r->next = p;
//	}
//	else {
//		while (q != NULL&& q->data <= r->data)
//			q = q->next;
//		r->next = q;
//	}
//    return c;
//}
//
//void display(ChainList L) {
//	Node* p = new Node;
//	p = L->next;
//	while (p!= NULL) {
//		cout << p->data << "  ";
//		p = p->next;
//	}
//}
//
//int main() {
//	cout << "请输入链表a："<<endl;
//	ChainList a = CreatNode(3);
//	cout << "请输入链表b："<<endl;
//	ChainList b = CreatNode(5);
//	ChainList c = CombineList(a, b);
//	cout << endl;
//	display(c);
//	return 0;
//}

//#include <iostream>
//#include<fstream>
//#define m 8
//#define n 8
//#define MAX 100
//using namespace std;
//typedef int Maze[m + 2][n + 2];
////最短路程的数据
//int minLen = MAX;
//typedef struct Position {
//	int x;
//	int y;
//} ;
//typedef struct StackNode {
//	Position posi;
//	int order=0;
//}Elemtype;
//
//StackNode minPath[MAX];
//
//class myWay
//{
//public:
//	myWay() { data = new Elemtype[MAX];if (data == NULL) { cout << "动态存储分配失败" << endl;exit(1); } };
//	void append(Elemtype);
//	void pop();
//	void display();
//	Elemtype getEnd();
//	int getLength() { return size; }
//	Elemtype* getData() { return data; }
//	bool isEmpty();
//	void setOrder(int num) { data[size - 1].order = num; }
//private:
//	int size = 0;
//	Elemtype* data;
//};
////入栈
//void myWay::append(Elemtype x) {
//	if(size < MAX)
//	{
//		size++;
//		data[size-1] = x;
//	}
//	else
//	{
//	cout << "栈满\n";
//	exit(1);
//	}
//}
////出栈
//void myWay::pop() {
//	if (size > 0)
//	{
//		size--;
//	}
//	else
//	{
//		cout << "栈空\n";
//		exit(1);
//	}
//}
////显示栈
//void myWay::display() {
//	for (int i = 0; i < size; i++)
//	{
//		cout << '('<<data[i].posi.x <<',' << data[i].posi.y<<')' << "  ";
//	}
//	cout << endl;
//}
//bool myWay::isEmpty() {
//		if (size == 0) {
//			return true;
//		}
//		else
//			return false;
//}
////获取栈的最后一个元素
//Elemtype myWay::getEnd() {
//	if (size!= 0)
//	{
//		return data[size-1];
//	}
//	else
//	{
//		cout << "栈空\n";
//		exit(1);
//	}
//}
////-------------------------------------------
////使用文件读取来赋初值或随机赋值
//void initmaze(Maze maze) {
//	fstream mazeSet;
//	mazeSet.open("mazeset.txt");
//	for (int i = 1;i < m + 1;i++) {
//		for (int j = 1;j < n + 1;j++)
//			mazeSet>>maze[i][j];
//	}
//	mazeSet.close();
//}
////获取最短路径
//void SetMinPath(myWay& way) {
//	if (way.getLength() < minLen) {
//		minLen = way.getLength();
//		for (int i = 0;i < way.getLength();i++)
//			minPath[i] = way.getData()[i];
//	}
//}
////打印最短路径
//void DisplayMinPath() {
//	cout << "最短的距离是：" << minLen << endl;
//	cout << "最短的路径为：";
//	for (int i = 0;i < minLen;i++)cout<<"("<<minPath[i].posi.x<<","<<minPath[i].posi.y<<")";
//	cout << endl;
//}
//
//void Move(Maze maze,myWay &way) {
//	if (way.isEmpty()) { return; }
//
//	StackNode Node=way.getEnd();
//
//	if (Node.posi.x == m && Node.posi.y == n) { 	//到终点后要回溯
//		SetMinPath(way);//打印排列好
//		way.display();
//		way.pop();//删掉终点（此时终点不是墙）
//		Node = way.getEnd();//回到终点的上一个点
//	}
//
//	maze[Node.posi.x][Node.posi.y] = 2;//防止重复访问
//
//	Position temp = Node.posi;//保存探索前的坐标，下面的向四个方向探索会使得Node的坐标改变
//	bool isFind = false;
//	while (Node.order <= 4 && !isFind) {//一个order值就可以使得节点退栈后不会再进入之前的点
//		Node.order++;
//		Node.posi = temp;
//		switch (Node.order)
//		{
//		case 1:Node.posi.y += 1;break;
//		case 2:Node.posi.x += 1;break;
//		case 3:Node.posi.y -= 1;break;
//		case 4:Node.posi.x -= 1;break;
//		}
//		if (maze[Node.posi.x][Node.posi.y] == 1)
//			isFind = true;
//	}
//	if(isFind){
//		way.setOrder(Node.order);//这个order值是坐标未改变的Node的值，也就是way的末尾节点
//		way.append(Node);
//		way.setOrder(0);//第一次入栈的节点的order值应该为0
//		Move(maze,way);
//	}
//	else {
//		maze[Node.posi.x][Node.posi.y] = 1;//退栈后之前的节点要可以被其他路径访问
//		way.pop();
//		Move(maze, way);
//	}	
//}
//
//void solveMaze(Maze maze,StackNode initNode) {
//	myWay accessibleWay=myWay();
//	accessibleWay.append(initNode);
//
//	Move(maze,accessibleWay);
//
//	DisplayMinPath();
//}
//
//int main() {
//	Maze maze = { 0 };
//	StackNode initNode = { 1,1,0 };
//
//	initmaze(maze);
//	if (maze[1][1] == 0) { cout << "初始位置为实体";return 0; }
//
//	solveMaze(maze,initNode);
//	return 0;
//}

//#include <cstdio>
//#include <crtdbg.h>
//#include <corecrt_malloc.h>
//typedef int datatype;
//
//typedef struct node
//{
//	datatype data;
//	struct node* next;
//}Node, * LoopChainList;//Each node is a pointer, not a simple variable.（每个节点都是一个指针，而不是一个简单的变量。）
//
//LoopChainList CreateListT(int n) {
//	Node* L = (Node*)malloc(sizeof(Node));
//	L->next = NULL;
//	L->data = n;
//	Node* r = (Node*)malloc(sizeof(Node));
//	r = L;//At this time, the address of L is given to r, and in the first loop r->next=p; It is equivalent to changing L->next, at this time L will not change, only the variable it points to, r is only the responsibility of changing the value.(这时把L的地址给了r，在第一次的循环中r->next=p;就相当于改变了L->next，这时候L已经不会改变了，改变的只是它所指向的变量，r只是代行改变值的职责。)
//	for (int i = 0; i < n; i++)
//	{
//		Node* p = (Node*)malloc(sizeof(Node));
//		printf("Enter the new node data in turn:");
//		scanf_s("%d", &p->data);
//		p->next = NULL;
//		r->next = p;
//		r = p;
//	}
//	r->next = L->next;
//	return L;
//}
//
////void DeleteNode(LoopChainList& list, int n) {
////	if (list == NULL) { printf("ERROR"); return; }
////	Node* p = (Node*)malloc(sizeof(Node));
////	p = list->next;
////	for (int j = 1;j < n;j++) {
////		p = p->next;
////	}
////	Node* q = (Node*)malloc(sizeof(Node));
////	q = p->next;
////	p->next = q->next;
////	delete(q);
////}
//
//void Josephus(LoopChainList list, int m) {
//	Node* p = (Node*)malloc(sizeof(Node));
//	p = list->next;
//	for (int i = 0; i < list->data - 2; i++)
//	{
//		for (int j = 0; j < m - 2; j++)
//		{
//			p = p->next;
//		}
//		Node* q = (Node*)malloc(sizeof(Node));
//		q = p->next;
//		printf("%d", q->data);
//		p->next = q->next;
//		delete(q);
//		p = p->next;
//	}
//	printf("The value of the remaining number is %d", p->data);
//}
//
//int main() {
//	LoopChainList list = CreateListT(8);
//	Josephus(list, 3);
//
//	return 0;
//}

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
#define MVNum 100

enum GraphClass{UDGraph, DGraph};

typedef int VerTexType;
typedef struct ArcNode {//边节点
	int adjvex;
	struct ArcNode* nextarc;
	short info;//一些其它信息
}ArcNode;
typedef struct VNode {//头节点
	VerTexType data;
	ArcNode* firstarc;
}VNode,AdjList[MVNum];

class ALGraph {
public:
	ALGraph() { vexnum = 0; arcnum = 0; }
	ALGraph(GraphClass n, string fileroad, int v, int a) :vexnum(v), arcnum(a) { createG(n, fileroad); }
	void createG(GraphClass G, string fileroad) {
		fstream file;
		file.open(fileroad);
		for (int i = 0; i < vexnum; i++) {
			file >> vertices[i].data;
			vertices[i].firstarc = NULL;
		}
		for (int i = 0; i < arcnum; i++) {
			VerTexType v1, v2;
			file >> v1 >> v2;
			int n = locateVex(v1);
			int m = locateVex(v2);
			ArcNode* p = new ArcNode();
			p->adjvex = m;
			p->nextarc = vertices[n].firstarc;
			vertices[n].firstarc = p;
			if (G == UDGraph) {
				ArcNode* q = new ArcNode();
				q->adjvex = n;
				q->nextarc = vertices[m].firstarc;
				vertices[m].firstarc = q;
			}
		}
		file.close();
	}
	//若图中存在v1顶点，那么返回v1的索引，否则返回-1
	int locateVex(VerTexType v1) {
		for (int i = 0; i < vexnum; i++) {
			if (vertices[i].data == v1) { return i; }
			else if (i == vexnum - 1 && vertices[i].data != v1) { return -1; }
		}
	}
	//打印出图
	void display() {
		for (int i = 0; i < vexnum; i++) {
			cout << "[" << vertices[i].data << "]";
			ArcNode* q = vertices[i].firstarc;
			if (q == NULL) {
				cout << endl;
			}
			else {
				while (q->nextarc != NULL) {
					cout << "->" << "[" << q->adjvex << "]";
					q = q->nextarc;
				}
				cout << "->" << "[" << q->adjvex << "]" << endl;
			}
		}
	}
	//由索引返回顶点
	VerTexType getVex(int v) {
		if (v < vexnum)
			return vertices[v].data;
		else { cout << "出界"; return 0; }
	}
	//深度优先遍历
	//void DFSTraverse() {
	//	vector<int> had_visited;
	//	ArcNode* p = new ArcNode;
	//	p->adjvex = 0;
	//	while (had_visited.size() < vexnum) {
	//		had_visited.push_back(p->adjvex);//将所处的头节点存到数组里，当作这个头节点已被访问过
	//		p = vertices[p->adjvex].firstarc;//将p从边节点跳到对应的头节点
	//		if (p != NULL) {
	//			//这个判断是判断p目前所指的这个边节点是否已经被遍历过了
	//			//find函数当未找到所给的key时会返回数组的末尾
	//			while (find(begin(had_visited), end(had_visited), p->adjvex) != end(had_visited)) { 
	//				p = p->nextarc; 
	//				if (p == NULL)break; 
	//			}
	//		}
	//		//当p需要回溯时
	//		if (p == NULL&& had_visited.size() < vexnum) {
	//			int n = 2;
	//			while (p == NULL) {
	//				if (n == had_visited.size() + 1) { cout << "无解"; exit(1); }
	//				p = vertices[had_visited[had_visited.size()-n]].firstarc;
	//				//这里的循环和上面的那个是一样的，用来判断回溯到的这个节点是否被遍历过的
	//				while (find(begin(had_visited), end(had_visited), p->adjvex) != end(had_visited)) {
	//					p = p->nextarc; 
	//					if (p == NULL)break; 
	//				}
	//				n++;
	//			}
	//		}
	//	}
	//	for (int ver : had_visited) {
	//		cout << vertices[ver].data << "  ";
	//	}
	//}
	void DFSTraverse() {
		bool visited[MVNum]={false};
		int count = 0;
		DFS(visited, 0,count);
		if (count < vexnum) {
			for (int i = 1; i < vexnum; i++)DFS(visited, i, count);
			cout << "\n" << "此图为非连通图";
		}
		cout << "\n" << count<<endl;
	}
	void DFS(bool visited[MVNum], int n,int& count) {
		cout << n; count++;
		visited[n] = true;
		for (ArcNode* p = vertices[n].firstarc; p != NULL; p = p->nextarc) {
			if (!visited[p->adjvex])DFS(visited, p->adjvex,count);
		}
	}
	//广度优先遍历
	void BFSTraverse() {
		bool visited[MVNum] = { false };
		int count = 0;
		BFS(visited, 0, count);
		if (count < vexnum) {
			for (int i = 1; i < vexnum; i++)BFS(visited, i, count);
			cout << "\n" << "此图为非连通图";
		}
		cout << "\n" << count<<endl;
	}
	void BFS(bool visited[MVNum], int n, int& count) {
		cout << n; count++;
		visited[n] = true;
		vector<int> queue;
		queue.insert(queue.begin(), n);
		while (!queue.empty()) {
			int u = queue.back();
			queue.pop_back();
			for (ArcNode* p = vertices[u].firstarc; p != NULL; p = p->nextarc) {
				if (!visited[p->adjvex]) {
					cout << p->adjvex; count++; visited[p->adjvex] = true;
					queue.insert(queue.begin(), p->adjvex);
				}
			}
		}
	}
private:
	AdjList vertices;
	int vexnum;
	int arcnum;
};

int main() {
	string fileroad = "Graph.txt";
	ALGraph Graph(UDGraph, fileroad, 8, 9);
	Graph.display();
	Graph.DFSTraverse();
	Graph.BFSTraverse();
	return 0;
}