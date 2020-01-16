#ifndef _Array_Queue_H		// if "_name.h" file is not defined,
#define _Array_Queue_H		// define "_name.h" file.	Then, do compile below code.

#define MAX 1001

struct Queue
{
	int arr[MAX];
	int front, rear;
};

typedef struct Queue queue;
extern queue que;					//	External global variable.

void Init();
bool Full();
bool Empty();
void Enqueue(int key);
void Dequeue();
int Peek();
int Size();
void Print();

#else							// if not, do compile below code.

#endif