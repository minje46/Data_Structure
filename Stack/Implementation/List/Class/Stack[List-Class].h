#ifndef _List_Class_Stack_H			// if "_name.h" file is not defined,
#define _List_Class_Stack_H			// define "_name.h" file.	Then, do compile below code.

#define INF 987654321

struct Node			// Node data.
{
	int key;
	struct Node *next;

	struct Node()
	{
		key = INF;
		next = NULL;
	}

	struct Node(int value)
	{
		key = value;
		next = NULL;
	}
};
typedef struct Node stack;

class Stack
{
private:
	stack *head;
	stack *stk;

public:
	Stack();
	~Stack();
	bool Empty();
	void Push(int key);
	void Pop();
	int Peek();
	int Size();
	void Print();
};

#else							// if not, do compile below code.

#endif