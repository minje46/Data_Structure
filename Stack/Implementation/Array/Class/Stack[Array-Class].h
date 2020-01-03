#ifndef _Array_Class_Stack_H		// if "_name.h" file is not defined,
#define _Array_Class_Stack_H		// define "_name.h" file.	Then, do compile below code.

#define MAX 1001

class Stack
{
private:
	int arr[MAX];
	int top;
							
public:
	Stack();
	~Stack();
	bool Full();
	bool Empty();
	void Push(int key);
	void Pop();
	int Peek();
	int Size();
	void Print();
};

#else											// if not, do compile below code.

#endif