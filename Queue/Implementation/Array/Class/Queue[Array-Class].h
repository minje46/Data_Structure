#ifndef _Array_Class_Queue_H		// if "_name.h" file is not defined,
#define _Array_Class_Queue_H		// define "_name.h" file.	Then, do compile below code.

#define MAX 1001

class Queue
{
private:
	int arr[MAX];
	int front;
	int rear;

public:
	Queue();
	~Queue();
	bool Full();
	bool Empty();
	void Enqueue(int key);
	void Dequeue();
	int Peek();
	int Size();
	void Print();
};

#else							// if not, do compile below code.

#endif