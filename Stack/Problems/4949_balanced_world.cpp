#include<iostream>
#include<string>
#include<stack>

using namespace std;											

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	while (true)
	{
		string str = "";									    // Input variable.
		getline(cin, str);

		if (str.length() == 1 && str[0] == '.')		// End condition.
			break;

		bool flag = true;
		stack<char> stk;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')			// Parentheses.
				stk.push(str[i]);
			else if (str[i] == ')')
			{
				if (stk.empty() || stk.top() != '(')
				{
					flag = false;
					break;
				}
				stk.pop();
			}
			else if (str[i] == ']')
			{
				if (stk.empty() || stk.top() != '[')
				{
					flag = false;
					break;
				}
				stk.pop();
			}
		}

		if (flag && stk.empty())						// Balanced string.
			cout << "yes" << endl;
		else											 		// Not pair of parentheses.
			cout << "no" << endl;
	}
}