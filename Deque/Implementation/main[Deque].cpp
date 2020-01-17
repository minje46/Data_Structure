#include<iostream>
#include "Deque[List].h"

using namespace std;

deque *head, *deq;					// Queue memory based on array.

int main(void)
{
	Init();
	if (Empty())
		cout << "Queue is empty" << endl;

	for (int i = 1; i <= 3; i++)
		Push_rear(i);
	cout << "Size of queue : " << Size() << endl;
	Print();

	for (int i = 9; i >= 6; i--)
		Push_front(i);
	cout << "Size of queue : " << Size() << endl;
	Print();

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			Pop_front();
		else
			Pop_rear();
		cout << endl << "Size of queue : " << Size() << endl;
		Print();
	}

	for (int i = 1; i <= 5; i++)
	{
		if (i % 2 == 0)
			Push_front(i);
		else
			Push_rear(i);
	}
	cout << "Size of queue : " << Size() << endl;
	Print();
}