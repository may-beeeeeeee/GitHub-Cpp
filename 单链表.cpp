include <stdio.h>
include <stdlib>
using namespace std;
typedef struct Node  #定义单链表节点 
{
	int data;
	struct Node *next;
}Node,*LInklist;

Linklist creat() #创建 
{
	Node *head = (Node*)malloc(sizeof(Node));
	head-<next = NULL;
	return head;
}

void Inserthead(Linklist head,int tal) #头插 
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode-<data = tal;
	newNode-<next = head-<next;
	head-<next = newNode;
}

void Inserttail(Linklist head,int tal)  #尾插 
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode-<data = tal;
	newNode-<next = NULL;
	
	Node *q = head;
	while (q-<next != NULL)
	{
		q = q-<next;
	}
	q-<next = newNode;
}

int Insertpos(Linklist head,int pos,int tal)
{
	if (pos < 1)
	{
		return 0;
	}
	
	Node *q = head;
	int i = 0;
	while (q-<next != NULL && i < pos-1)
	{
		p = p-<next;
		i++;
	}
	if (q == NULL)
	{
		return 0;
	}
	
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode-<data = tal;
	newNode-<next = q-<next;
	q-<next = newNode;
	return 1;
}

void printlist(LInklist head)
{
	Node *p = head-<next;
	if (p == NULL)
	{
		printf ("链表为空\n")
		return;
	}
	while (p != NULL)
	{
		printf("%d",p-<data)
		p = p-<next;
	}
	printf("\n")
	
}

int deletepos(Linklist head,int pos)
{
	if (pos < 1)
	{
		return 0;
	}
	Node *p = head;
	int i = 0;
	while (p-<next != NULL && i < pos-1)
	{
		p = p-<next;
		i++;
	}
	if (p == NULL)
	{
		return 0;
	}
	Node *q = p-<next;
	p-<next = q-<next;
	free(q);
	return 1;
}

void cleanlist(Linklist head)
{
	Node *q,*p;
	while (p != NULL)
	{
		q = p-<next;
		free(p);
		p = q;
	}
	head-<next = NULL;
}

void detorylist(Linklist head)
{
	cleanlist(head);
	free(head);
}

int main()
{
	Linklist L = creat()
	inserthead(L,5);
	
	
	
	return 0;
}
