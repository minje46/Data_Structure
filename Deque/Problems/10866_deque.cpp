#include<iostream>
#include<deque>
#include<cstring>

using namespace std;

deque<int> deq;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int test_case;
	cin >> test_case;
	cin.ignore();
	for (int t = 1; t <= test_case; t++)
	{
		char ch[20];
		cin >> ch;

		if (!strcmp(ch, "push_front"))
		{
			int num;
			cin >> num;
			deq.push_front(num);
		}

		else if (!strcmp(ch, "pop_front"))
		{
			if (deq.empty())
				cout << -1 << endl;
			else
			{
				cout << deq.front() << endl;
				deq.pop_front();
			}
		}

		else if (!strcmp(ch, "push_back"))
		{
			int num;
			cin >> num;
			deq.push_back(num);
		}

		else if (!strcmp(ch, "pop_back"))
		{
			if (deq.empty())
				cout << -1 << endl;
			else
			{
				cout << deq.back() << endl;
				deq.pop_back();
			}
		}

		else if (!strcmp(ch, "size"))
			cout << deq.size() << endl;

		else if (!strcmp(ch, "empty"))
			cout << deq.empty() << endl;

		else if (!strcmp(ch, "front"))
		{
			if (deq.empty())
				cout << -1 << endl;
			else
				cout << deq.front() << endl;
		}

		else if (!strcmp(ch, "back"))
		{
			if (deq.empty())
				cout << -1 << endl;
			else
				cout << deq.back() << endl;
		}
	}
}