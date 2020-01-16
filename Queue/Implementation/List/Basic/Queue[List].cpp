#include<iostream>
#include<malloc.h>
#include "Queue[List].h"

using namespace std;

void Init()								// To do initialize the queue.
{											// queue is initialized as null.
	head = NULL;						// head is used as front.
	que = NULL;						// que is used as rear.
}

bool Empty()							// To check queue is empty or not.
{
	if (head == NULL)				// Condition of empty queue.
		return true;
	else
		return false;
}

void Enqueue(int key)				// Enqueue the value in queue
{
	queue *new_node = (queue *)malloc(sizeof(queue));
	new_node->key = key;
	new_node->next = NULL;

	if (Empty())
	{
		head = (queue *)malloc(sizeof(queue));
		que = (queue *)malloc(sizeof(queue));
		head = new_node;
		que = new_node;
	}
	else
	{
		que->next = new_node;
		que = new_node;
	}
}

void Dequeue()						// Dequeue the last value from queue.
{
	if (Empty())
		cout << "Queue Empty" << endl;
	else
	{
		queue *tmp = head->next;
		free(head);
		head = tmp;
	}
}

int Peek()								// Front in queue.
{
	return head->key;
}

int Size()								// The size of queue.
{
	int cnt = 0;
	queue *ptr = head;
	while (ptr)
	{
		ptr = ptr->next;
		cnt++;
	}

	return cnt;
}

void Print()								// Print the whole of queue
{
	queue *ptr = head;
	while (ptr)
	{
		cout << ptr->key << " ";
		ptr = ptr->next;
	}
	cout << endl;
}