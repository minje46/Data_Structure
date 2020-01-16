#include<iostream>
#include "Queue[List-Class].h"

using namespace std;

Queue::Queue()						// Constructor.
{											// queue is initialized as null.
	head = new queue();			// head is used as front.
	que = new queue();				// que is used as rear.
}

Queue::~Queue()					// Destructor.
{
	delete(head);
	delete(que);
}

bool Queue::Empty()				// To check queue is empty or not.
{
	if (head == NULL || head->key == INF)			// Condition of empty queue.
		return true;
	else
		return false;
}

void Queue::Enqueue(int key)	// Enqueue the value in queue
{
	queue *new_node = new queue(key);

	if (Empty())
	{
		head = new_node;
		que = new_node;
	}
	else
	{
		que->next = new_node;
		que = new_node;
	}
}

void Queue::Dequeue()		// Dequeue the last value from queue.
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

int Queue::Peek()				// Front in queue.
{
	return head->key;
}

int Queue::Size()					// The size of queue.
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

void Queue::Print()				// Print the whole of queue
{
	queue *ptr = head;
	while (ptr)
	{
		cout << ptr->key << " ";
		ptr = ptr->next;
	}
	cout << endl;
}