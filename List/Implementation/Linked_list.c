#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>

typedef struct Node			// Node data.
{
	int key;
	struct Node *next;
}Node;

Node *head, *tail = NULL;

void push_front(int key)	// Push new node in header.
{
	Node *new_node = (Node*)malloc(sizeof(Node));
	new_node->key = key;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = (Node *)malloc(sizeof(Node));
		tail = (Node *)malloc(sizeof(Node));
		head->next = new_node;
		tail = new_node;
	}
	else
	{
		int nxt = head->next;
		head->next = new_node;
		new_node->next = nxt;
	}
}

void pop_front()		// Pop the node from header.
{
	if (head == NULL)
		return;

	Node *ptr = head->next;
	head->next = ptr->next;
	free(ptr);
}

void push_back(int key)		// Push new node in tail.
{
	Node *new_node = (Node*)malloc(sizeof(Node));
	new_node->key = key;
	new_node->next = NULL;

	if (head == tail)
	{
		head = (Node *)malloc(sizeof(Node));
		tail = (Node *)malloc(sizeof(Node));
		head->next = new_node;
		tail = new_node;
	}
	else
	{
		tail->next = new_node;
		tail = new_node;
	}
}

void pop_back()		// Pop the node from tail.
{
	if (head == tail)
		return;

	Node *ptr = head->next;
	while (ptr->next != tail)
		ptr = ptr->next;	
	free(tail);
	tail = ptr;
	tail->next = NULL;
}

bool Empty()		// To figure out whether it is empty or not.
{
	if (head == tail)
		return true;
	else
		return false;
}

int Size()		// The size of linked list.
{
	if (head == tail)
		return -1;

	int cnt = 0;
	Node *ptr = head->next;
	while (ptr)
	{
		ptr = ptr->next;
		cnt += 1;
	}

	return cnt;
}

void Print()		// Print the whole of list.
{
	Node *ptr = head->next;
	while (ptr)
	{
		printf("%d\n", ptr->key);
		ptr = ptr->next;
	}
}
