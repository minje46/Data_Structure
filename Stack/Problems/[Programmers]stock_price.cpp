#include <iostream>
#include <stack>
#include <vector>

using namespace std;
vector<int> solution(vector<int> prices) 
{
	vector<int> answer(prices.size());
	stack<int> s;
	int size = prices.size();
	for (int i = 0; i<size; i++) {
		while (!s.empty() && prices[s.top()]>prices[i]) {
			answer[s.top()] = i - s.top();
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty()) {
		answer[s.top()] = size - s.top() - 1;
		s.pop();
	}
	return answer;
}

vector<int> solution(vector<int> prices)
{
	vector<int> answer;
	for (int i = 0; i<prices.size(); i++)				// In the whole of prices.
	{
		stack<int> stk;
		for (int j = i + 1; j<prices.size(); j++)		// From current +1 To end.
		{
			stk.push(prices[j]);
			if (prices[i] > prices[j])					// Compare the prices.
				break;
		}
		answer.push_back(stk.size());				// Time of maintain. 
	}
	return answer;
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