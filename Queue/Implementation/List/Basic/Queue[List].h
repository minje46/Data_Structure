#ifndef _List_Queue_H			// if "_name.h" file is not defined,
#define _List_Queue_H			// define "_name.h" file.	Then, do compile below code.

struct Node						// Node data.
{
	int key;
	struct Node *next;
};

typedef struct Node queue;
extern queue *head, *que;	//	External global variable.

void Init();
bool Empty();
void Enqueue(int key);
void Dequeue();
int Peek();
int Size();
void Print();

#else									// if not, do compile below code.

#endif