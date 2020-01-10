#include<iostream>
#include<stack>
#include<string>

using namespace std;

int Check(string str)					// To figure out whether parentheses are correct or not.
{											// [k(a+b) = ka + kb ���.]
	int result = 0, multi = 1;		// result = The total value as output.
	stack<char> stk;					// multi = The multiplied value in progress.
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(' || str[i] == '[')
		{									// Open case.	
			stk.push(str[i]);			// [��ø�Ǵ� parentheses�� multiplication.]			
			if (str[i] == '(')
				multi *= 2;
			else
				multi *= 3;
		}
		else								// Close case.
		{									// [parentheses�� ������ ��쿡�� addition.]	
			if (stk.empty())				// Exception.
				return 0;

			if (stk.top() == '(' && str[i] == ')')
			{			
				if (str[i - 1] == '(')		// [�ߺ��Ǵ� calculation�� ����.]
					result += multi;
				multi /= 2;
			}
			else if (stk.top() == '[' && str[i] == ']')
			{
				if (str[i - 1] == '[')
					result += multi;
				multi /= 3;
			}
			else
				return 0;
			stk.pop();
		}
	}

	if (!stk.empty())
		return 0;
	else 
		return result;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	string str;									// str = The memory of input string.
	cin >> str;

	cout << Check(str) << endl;
}