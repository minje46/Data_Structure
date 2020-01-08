#include<iostream>
#include<stack>
#include<string>

using namespace std;

int Count(string str)					// To count the number of splited iron bars.
{
		int result = 0;						// result = The total number of splited iron bars.		
	stack<char> stk;				
	for (int i = 0; i < str.length(); i++)
	{										// [Nested '()' 내부에 '()'의 개수 +1 = Splited bars.]
		if (str[i] == '(')
			stk.push(str[i]);		
		else
		{
			stk.pop();
			if (str[i - 1] == '(')		// The condition of splited moment.
				result += stk.size();
			else							// The rest of bars after splited.	
				result += 1;
		}
	}
	return result;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	string str;
	cin >> str;											// Input.

	cout << Count(str) << endl;					// Output.
}