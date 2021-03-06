#include<iostream>
#include "Queue[Array-Circular].h"

using namespace std;

queue que;					// Queue memory based on array.

int main(void)
{
	Init();
	if (Empty())
		cout << "Queue is empty" << endl;

	for (int i = 1; i <= 5; i++)
		Enqueue(i);

	cout << "Size of queue : " << Size() << endl;
	Print();

	for (int i = 0; i < 5; i++)
	{
		Dequeue();
		cout << endl << "Size of queue : " << Size() << endl;
		Print();
	}

	for (int i = 1; i <= 10; i++)
		Enqueue(i);

	cout << "Size of queue : " << Size() << endl;
	Print();
}