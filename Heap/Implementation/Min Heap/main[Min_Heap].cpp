#include<iostream>
#include "Min_Heap[Array].h"

using namespace std;

heap hp;					// Heap based on array.

int main(void)
{
	Init();
	if (Empty())
		cout << "Heap is empty" << endl;

	for (int i = 1; i <= 9; i++)
		Insert(i);
	cout << "Size of heap : " << hp.size << endl;
	Print();

	for (int i = 0; i < 3; i++)
	{
		Delete();
		Print();
	}

	for (int i = 10; i < 13; i++)
	{
		Insert(i);
		Print();
	}
}