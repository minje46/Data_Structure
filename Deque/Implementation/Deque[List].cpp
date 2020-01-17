#include<iostream>
#include<malloc.h>
#include "Deque[List].h"

using namespace std;

void Init()								// To do initialize the deque.
{											// deque is initialized as null.
	head = NULL;						// head is used as front.
	deq = NULL;						// deq is used as rear.
}

bool Empty()							// To check deque is empty or not.
{
	if (head == NULL)				// Condition of empty deque.
		return true;
	else
		return false;
}

void Push_front(int key)			// Push the value at the front in deque.
{
	deque *new_node = (deque *)malloc(sizeof(deque));
	new_node->key = key;
	new_node->prev = NULL;

	if (Empty())
	{
		head = (deque *)malloc(sizeof(deque));
		deq = (deque *)malloc(sizeof(deque));
		head = new_node;
		deq = new_node;
	}
	else
	{
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
	}
}

void Pop_front()						// Pop the front value in deque.
{
	if (Empty())
		cout << "Deque Empty" << endl;
	else
	{
		deque *tmp = head->next;
		free(head);
		head = tmp;
		head->prev = NULL;
	}
}

void Push_rear(int key)				// Push the value at the rear in deque.
{
	deque *new_node = (deque *)malloc(sizeof(deque));
	new_node->key = key;
	new_node->next = NULL;

	if (Empty())
	{
		head = (deque *)malloc(sizeof(deque));
		deq = (deque *)malloc(sizeof(deque));
		head = new_node;
		deq = new_node;
	}
	else
	{
		deq->next = new_node;
		new_node->prev = deq;
		deq = new_node;
	}
}

void Pop_rear()					// Pop the rear value in deque.
{
	if (Empty())
		cout << "Deque Empty" << endl;
	else
	{
		deque *tmp = deq->prev;
		free(deq);
		deq = tmp;
		deq->next = NULL;
	}
}

int Front()						// Front in deque.
{
	return head->key;
}

int Rear()						// Rear in deque.
{
	return deq->key;
}

int Size()								// The size of deque.
{
	int cnt = 0;
	deque *ptr = head;
	while (ptr)
	{
		ptr = ptr->next;
		cnt++;
	}
	return cnt;
}

void Print()								// Print the whole of queue
{
	deque *ptr = head;
	while (ptr)
	{
		cout << ptr->key << " ";
		ptr = ptr->next;
	}
	cout << endl;
}