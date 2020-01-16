#include<iostream>
#include "Queue[Array].h"

using namespace std;

void Init()								// To do initialize the queue.
{
	que.front = que.rear = -1;	// front and rear are located in -1.
}

bool Full()								// To check queue is full or not.
{
	if (que.rear + 1 == MAX)		// Condition of full queue.
		return true;
	else
		return false;
}

bool Empty()							// To check queue is empty or not.
{
	if (que.front == que.rear)		// Condition of empty queue.
		return true;
	else
		return false;
}

void Enqueue(int key)				// Enqueue the value in queue
{
	if (Full())
		cout << "Queue Full" << endl;
	else
	{
		if (que.front == -1)
			que.front += 1;
		que.rear += 1;
		que.arr[que.rear] = key;
	}
}

void Dequeue()						// Dequeue the last value from queue.
{
	if (Empty())
		cout << "Queue Empty" << endl;
	else
		que.front += 1;
}

int Peek()								// Front in queue.
{
	return que.arr[que.front];
}

int Size()								// The size of queue.
{
	return que.rear - que.front + 1;
}

void Print()								// Print the whole of queue
{
	for (int i = que.front; i <= que.rear; i++)
		cout << que.arr[i] << " ";
	cout << endl;
}