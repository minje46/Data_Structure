#ifndef _Array_Max_Heap_H			// if "_name.h" file is not defined,
#define _Array_Max_Heap_H			// define "_name.h" file.	Then, do compile below code.

#define MAX 1001

struct Heap
{
	int arr[MAX];
	int size;
};

typedef struct Heap heap;
extern heap hp;

void Init();
void Insert(int key);
void Delete();
bool Empty();
int Get_Max();
void Print();

#else									// if not, do compile below code.

#endif