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
			stk.pop();												// [Price가 감소한 시점에서, 자기 위치 index을 뺀 값이 유지된 시간.]
		}
		stk.push(i);													// If the prices keep high, it is in the stack.
	}

	while (!stk.empty())											// Remainders.
	{																	// [Price가 감소하지 않고 계속 증가한 경우들.]
		answer[stk.top()] = prices.size() - stk.top() - 1;
		stk.pop();													// [전체 price들 중에서, 자기 위치 index와 1을 뺀 값이 유지된 시간.]	
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