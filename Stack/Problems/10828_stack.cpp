#include<iostream>
#include<string>

#define MAX 10001

using namespace std;

int stk[MAX];					// stk = The memory of stack based on array.
int top = -1;					// top = The index of stack with LIFO system.

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int N;														// N = The number of instructions.
	cin >> N;
	cin.ignore();											// To clear "\n" in buffer.
	for (int i = 0; i < N; i++)
	{
		string str;
		getline(cin, str);

		if (str.find("push") != str.npos)				// Push.
			stk[++top] = stoi(str.substr(5));

		if (str.find("pop") != str.npos)				// Pop.
		{
			if (top == -1)
				cout << -1 << endl;
			else
				cout << stk[top--] << endl;
		}

		if (str.find("size") != str.npos)				// Size.
			cout << top + 1 << endl;

		if (str.find("empty") != str.npos)			// Empty.	
		{
			if (top == -1)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}

		if (str.find("top") != str.npos)				// Top.
		{
			if (top == -1)
				cout << -1 << endl;
			else
				cout << stk[top] << endl;
		}
	}
}