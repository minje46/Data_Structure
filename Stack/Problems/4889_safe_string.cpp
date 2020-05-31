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
		{													// [Empty에서 }가 나온다면, 무조건 {으로 바꾸어 주어야 하는 case]
			cnt++;
			str[i] = '{';
			stk.push(str[i]);
		}
		else if (!stk.empty() && str[i] == '}')	// [stk에는 open case('{')만 저장되어 있기때문에,
			stk.pop();									// empty가 아닌 경우에, close case를 만나면 pair가 이루어 진 것]
		else												// [open case의 경우, push]
			stk.push(str[i]);
	}														// [stk에 남아있는 것들은 모두 open case들이므로,	
	return cnt + stk.size() / 2;						// pair에 맞추어 convert하려면 size/2 연산 필요]
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