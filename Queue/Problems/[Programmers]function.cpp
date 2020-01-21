#include<iostream>
#include<queue>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)		// To figure out the progress's order based on queue.
{
	queue<int>que;															// que = The lead time of progress remainder is stored.
	for (int i = 0; i < progresses.size(); i++)
	{
		int rem = (100 - progresses[i]) / speeds[i];				// Remainder days to complete progress.	
		if ((100 - progresses[i]) % speeds[i] != 0)				// Ceiling.
			rem++;

		que.push(rem);	
	}

	vector<int> answer;
	int cnt = 0, max = que.front();
	while (!que.empty())
	{
		auto cur = que.front();
		que.pop();
		cnt++;

		if (que.empty() || max < que.front())							// Condition of splited days.
		{
			answer.push_back(cnt);
			max = que.front();
			cnt = 0;
		}
	}

	return answer;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	vector<int> progress = { 93,33,54 };
	vector<int> speed = { 1,30,5 };
	vector<int> ans = solution(progress, speed);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
}