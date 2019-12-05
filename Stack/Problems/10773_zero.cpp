#include<iostream>
#include<stack>

#define MAX 100001

using namespace std;

int K;						// K = The number of inputs.	
stack<int> stk;		// stk = The memory of input in stack data structure.
int answer = 0;		// answer = The total sum as output.

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);
	
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		int value;
		cin >> value;

		if (value == 0)				// The condition of pop.
			stk.pop();
		else							// If not, push.
			stk.push(value);
	}

	while (!stk.empty())			// In the whole of stack,
	{
		answer += stk.top();	// total sum value.
		stk.pop();
	}

	cout << answer << endl;
}