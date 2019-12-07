#include<iostream>
#include "Stack[Array].h"

using namespace std;

stack stk;					// Stack memory based on array.

int main(void)
{	
	Init();           
	if (Empty())
		cout << "Stack is empty" << endl;

	for (int i = 1; i <= 10; i++)
		Push(i);

	cout << "Size of stack : " << Size() << endl;
	Print();

	for (int i = 0; i < 5; i++)
	{
		Pop();
		cout << endl << "Size of stack : " << Size() << endl;
		Print();
	}
}