#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights)		// To figure out the nearest tower which is higher than current one.
{
	int n = heights.size();
	vector<int> answer(n);
	for (int i = n - 1; i > 0; i--)
	{
		stack<pair<int, int>> stk;						// The tower's height which is located left from current one.
		for (int j = 0; j < i; j++)							// <index, height>
			stk.push(make_pair(j + 1, heights[j]));

		int idx = 0;
		while (!stk.empty())
		{
			auto cur = stk.top();
			stk.pop();

			if (cur.second > heights[i])				// Compare the heights.
			{
				idx = cur.first;
				break;
			}
		}
		answer[i] = idx;									// Results.
	}
	return answer;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	vector<int> vc = { 6,9,5,7,4 };
	vector<int> ans = solution(vc);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	cout << endl;
}