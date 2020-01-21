#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

int solution(vector<int> priorities, int location)					// To figure out the target's order to print.
{
	queue<int> que;
	for (int i = 0; i < priorities.size(); i++)
		que.push(i);

	int cnt = 0;
	while (!que.empty())
	{
		auto cur = que.front();
		que.pop();
		// Whether the current doc has highest priority or not.
		if (*max_element(priorities.begin(), priorities.end()) == priorities[cur])
		{											// "max_element" returns the pointer of maximum value. 
			cnt++;								// Count of printed documents.
			priorities[cur] = -1;				// Convert to trash value.

			if (location == cur)				// Target.
				return cnt;
		}
		else
			que.push(cur);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	//	vector<int> priorities = { 2, 1, 3, 2 };
	vector<int> priorities = { 1, 1, 9, 1, 1, 1 };

	cout << solution(priorities, 0) << endl;
}