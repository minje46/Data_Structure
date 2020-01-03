#include<iostream>
#include "Stack[Array-Class].h"

using namespace std;

Stack::Stack()						// Constructor.
{
	arr[MAX];
	top = -1;						// top is located in -1.
}

Stack::~Stack()					// Destructor.
{
}

bool Stack::Full()					// To check stack is full or not.
{
	if (top + 1 == MAX)			// Condition of full stack.
		return true;
	else
		return false;
}

bool Stack::Empty()				// To check stack is empty or not.
{
	if (top == -1)					// Condition of empty stack.
		return true;
	else
		return false;
}

void Stack::Push(int key)		// Push the value in stack.	
{
	if (Full())
		cout << "Stack Full" << endl;
	else
	{
		top += 1;
		arr[top] = key;
	}
}

void Stack::Pop()				// Pop the last value from stack.
{
	if (Empty())
		cout << "Stack Empty" << endl;
	else
		top -= 1;
}

int Stack::Peek()					// Top in stack.
{
	return top;
}

int Stack::Size()					// The size of stack.
{
	return top + 1;
}

void Stack::Print()				// Print the whole of stack.
{
	for (int i = 0; i <= top; i++)
		cout << arr[i] << " ";
	cout << endl;
}