#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool Check(string str)
{
	stack<char> stk;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')				// Just push.
			stk.push(str[i]);
		else								// When the ')' comes,	
		{
			if (!stk.empty())			// the stack should be not empty state.
			{
				if (stk.top() == '(')			// also, the '(' should be stored.	
					stk.pop();
				else								// If not, wrong case.
					return false;	
			}	
			else							// If stack is empty, wrong case.
				return false;
		}
	}

	if (stk.empty())					// If the whole '(' and ')' popped, correct case. 
		return true;
	else									// If not, worng case.
		return false;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int test_case;
	cin >> test_case;
	for (int t = 1; t <= test_case; t++)
	{
		string str;
		cin >> str;

		if (Check(str))							// To figure out the string has correct parenthesis string.
			cout << "YES" << endl;
		else										// or not.				
			cout << "NO" << endl;
	}
}