#include<iostream>
#include "Queue[Array-Circular].h"

using namespace std;

void Init()								// To do initialize the queue.
{
	que.front = que.rear = 0;	// front and rear are located in -1.
	que.cnt = 0;
}

bool Full()								// To check queue is full or not.
{
	if ((que.rear + 1) % MAX == que.front)		// Condition of full queue.
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

int Index(int idx)						// To figure out the next index. 
{
	if (idx == MAX - 1)				// Avoid overflow.
		return 0;
	else					
		return idx + 1;
}

void Enqueue(int key)				// Enqueue the value in queue
{
	if (Full())
		cout << "Queue Full" << endl;
	else
	{
		que.rear = Index(que.rear);
		que.arr[que.rear] = key;
		que.cnt++;
	}
}

void Dequeue()						// Dequeue the last value from queue.
{
	if (Empty())
		cout << "Queue Empty" << endl;
	else
	{
		que.front = Index(que.front);
		que.arr[que.front] = 0;
		que.cnt--;
	}
}

int Peek()								// Front in queue.
{
	return que.arr[que.front];
}

int Size()								// The size of queue.
{
	return que.cnt;
}

void Print()								// Print the whole of queue
{
	for (int i = 0; i < MAX; i++)
	{
		if (que.arr[i] == 0)
			continue;
		cout << que.arr[i] << " ";
	}
	cout << endl;
}