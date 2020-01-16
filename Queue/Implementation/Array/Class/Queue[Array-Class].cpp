#include<iostream>
#include "Queue[Array-Class].h"

using namespace std;

Queue::Queue()						// Constructor.
{
	arr[MAX];
	front = -1;
	rear = -1;
}

Queue::~Queue()					// Destructor.
{
}

bool Queue::Full()					// To check queue is full or not.
{
	if (rear + 1 == MAX)				// Condition of full queue.
		return true;
	else
		return false;
}

bool Queue::Empty()				// To check queue is empty or not.
{
	if (front == -1 || front > rear)					// Condition of empty queue.
		return true;
	else
		return false;
}

void Queue::Enqueue(int key)	// Enqueue the value in queue
{
	if (Full())
		cout << "Queue Full" << endl;
	else
	{
		if (front == -1)
			front += 1;
		rear += 1;
		arr[rear] = key;
	}
}

void Queue::Dequeue()			// Dequeue the last value from queue.
{
	if (Empty())
		cout << "Queue Empty" << endl;
	else
		front += 1;
}

int Queue::Peek()					// Front in queue.
{
	return arr[front];
}

int Queue::Size()						// The size of queue.
{
	return rear - front + 1;
}

void Queue::Print()					// Print the whole of queue
{
	for (int i = front; i <= rear; i++)
		cout << arr[i] << " ";
	cout << endl;
}