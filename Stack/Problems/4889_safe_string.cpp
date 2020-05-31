#include<iostream>
#include<stack>
#include<string>

using namespace std;

int Simulation(string str)		// To figure out the minimum operation to make safe string.
{
	stack<char>stk;		// stk = The memory for storing open case's.
	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (stk.empty() && str[i] == '}')			// It should convert parenthesis.
		{													// [Empty���� }�� ���´ٸ�, ������ {���� �ٲپ� �־�� �ϴ� case]
			cnt++;
			str[i] = '{';
			stk.push(str[i]);
		}
		else if (!stk.empty() && str[i] == '}')	// [stk���� open case('{')�� ����Ǿ� �ֱ⶧����,
			stk.pop();									// empty�� �ƴ� ��쿡, close case�� ������ pair�� �̷�� �� ��]
		else												// [open case�� ���, push]
			stk.push(str[i]);
	}														// [stk�� �����ִ� �͵��� ��� open case���̹Ƿ�,	
	return cnt + stk.size() / 2;						// pair�� ���߾� convert�Ϸ��� size/2 ���� �ʿ�]
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int test_case = 1;
	while (true)
	{
		string str;
		cin >> str;
		if (str[0] == '-')
			return 0;

		int answer = Simulation(str);

		cout << test_case++ << ". " << answer << endl;
	}
}