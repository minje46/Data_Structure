#include<iostream>
#include "Queue[Array-Class].h"

using namespace std;

Queue que;				// Queue memory based on array.

int main(void)
{
	if (que.Empty())
		cout << "Queue is empty" << endl;

	for (int i = 1; i <= 10; i++)
		que.Enqueue(i);

	cout << "Size of queue : " << que.Size() << endl;
	que.Print();

	for (int i = 0; i < 5; i++)
	{
		que.Dequeue();
		cout << endl << "Size of queue : " << que.Size() << endl;
		que.Print();
	}
}