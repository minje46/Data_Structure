#ifndef _Array_Priority_Queue_H			// if "_name.h" file is not defined,
#define _Array_Priority_Queue_H			// define "_name.h" file.	Then, do compile below code.

#define MAX 1001

typedef int Compare(int a, int b);

struct Heap
{
	Compare *comp;
	int arr[MAX];
	int size;
};

typedef struct Heap priority_queue;

void Init(priority_queue *pq, Compare cp);
void Insert(priority_queue *pq, int key);
void Delete(priority_queue *pq);
bool Empty(priority_queue *pq);
int Get_Data(priority_queue *pq);
void Print(priority_queue *pq);

#else									// if not, do compile below code.

#endif