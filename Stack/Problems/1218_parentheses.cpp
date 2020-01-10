#include<iostream>
#include<stack>
#pragma warning(disable:4996)
#define MAX 1000000

using namespace std;

int N;										// N = The length of string as input data.
char str[MAX];						// str = The memory of input data.

bool Simulation()						// To figure out whether parentheses are correct or not.	
{
	stack<char> stk;
	for (int i = 0; i < N; i++)
	{										// Open case.
		if (str[i] == '(' || str[i] == '[' || str[i] == '<' || str[i] == '{')
			stk.push(str[i]);
		else								// Close case.
		{
			if (stk.empty())			// Exception.
				return false;
			else if (str[i] == ')' && stk.top() == '(')
				stk.pop();
			else if (str[i] == ']' && stk.top() == '[')
				stk.pop();
			else if (str[i] == '>' && stk.top() == '<')
				stk.pop();
			else if (str[i] == '}' && stk.top() == '{')
				stk.pop();
			else
				return false;
		}
	}

	if (stk.empty())						
		return true;
	else
		return false;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	freopen("input.txt", "r", stdin);
	for (int t = 1; t <= 10; t++)
	{
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> str[i];

		cout << "#" << t << " " << Simulation() << endl;
	}
}