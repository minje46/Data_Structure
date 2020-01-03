#include<iostream>
#include "Stack[Array-Class].h"

using namespace std;

Stack stk;				// Stack memory based on array.

int main(void)
{
	if (stk.Empty())
		cout << "Stack is empty" << endl;

	for (int i = 1; i <= 10; i++)
		stk.Push(i);

	cout << "Size of stack : " << stk.Size() << endl;
	stk.Print();

	for (int i = 0; i < 5; i++)
	{
		stk.Pop();
		cout << endl << "Size of stack : " << stk.Size() << endl;
		stk.Print();
	}
}