#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) 
{
	vector<int> answer(prices.size());
	stack<int> stk;

	for (int i = 0; i < prices.size(); i++)						// In the whole of prices.
	{
		while (!stk.empty() && prices[stk.top()] > prices[i])
		{																// Compare the prices.	
			answer[stk.top()] = i - stk.top();				// The moment when the price was decreased.
			stk.pop();												// [Price�� ������ ��������, �ڱ� ��ġ index�� �� ���� ������ �ð�.]
		}
		stk.push(i);													// If the prices keep high, it is in the stack.
	}

	while (!stk.empty())											// Remainders.
	{																	// [Price�� �������� �ʰ� ��� ������ ����.]
		answer[stk.top()] = prices.size() - stk.top() - 1;
		stk.pop();													// [��ü price�� �߿���, �ڱ� ��ġ index�� 1�� �� ���� ������ �ð�.]	
	}

	return answer;													// Output.
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	vector<int> vc = { 1, 2, 3, 2, 3 };
	vector<int> res = solution(vc);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
}