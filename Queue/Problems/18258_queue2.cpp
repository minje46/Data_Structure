#include<iostream>
#include<queue>
#include<cstring>
				
using namespace std;

queue<int> que;												

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int test_case;
	cin >> test_case;
	cin.ignore();
	for (int t = 1; t <= test_case; t++)
	{
		char ch[10];
		cin >> ch;

		if (!strcmp(ch, "push"))
		{
			int num;
			cin >> num;
			que.push(num);
		}

		else if (!strcmp(ch, "pop"))
		{
			if (que.empty())
				cout << -1 << endl;
			else
			{
				cout << que.front() << endl;
				que.pop();
			}
		}

		else if (!strcmp(ch, "size"))
			cout << que.size() << endl;

		else if (!strcmp(ch, "empty"))
			cout << que.empty() << endl;

		else if (!strcmp(ch, "front"))
		{
			if (que.empty())
				cout << -1 << endl;
			else
				cout << que.front() << endl;
		}

		else if (!strcmp(ch, "back"))
		{
			if (que.empty())
				cout << -1 << endl;
			else
				cout << que.back() << endl;
		}
	}
}