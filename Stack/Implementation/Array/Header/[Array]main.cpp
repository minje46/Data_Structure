#include<iostream>
#include "[Array]Stack.h"

using namespace std;

stack stk;					// User defined stack memory based on array.

int main(void)
{
	Init(&stk);
	if (Empty(&stk))
		cout << "Stack is empty" << endl;

	for (int i = 1; i <= 10; i++)
		Push(&stk, i);

	cout << "Size of stack : " << Size(&stk) << endl;
	Print(&stk);

	for (int i = 0; i < 5; i++)
	{
		Pop(&stk);
		Print(&stk);
	}
}