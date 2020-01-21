#include<iostream>
#include<deque>
#include<string>

using namespace std;

string Simulation(string str, string arr)			// To do simulation.
{
	deque<int> deq;
	string tmp = "";
	for (int i = 0; i < arr.length(); i++)			// To preprocess input string.
	{
		if (arr[i] >= '0' && arr[i] <= '9')		// Extract integer value.	
			tmp += arr[i];
		else if (arr[i] == ',' || arr[i] == ']' && tmp != "")
		{
			deq.push_back(stoi(tmp));
			tmp.clear();
		}
	}

	bool flag = true;									// [Deque의 front, back 기준을 변경하기 위한 flag.] 
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'R')								// Do not need to reverse the whole of data in deque.
			flag = !flag;								// Just convert the cursor in deque.		
															
		else if (str[i] == 'D')
		{
			if (deq.empty())							// Exception.
				return "error";

			if (flag)
				deq.pop_front();
			else
				deq.pop_back();
		}
	}

	string answer = "[";								// Set the output string.
	while (!deq.empty())
	{
		int cur;
		if (flag)
		{
			cur = deq.front();
			deq.pop_front();
		}
		else
		{
			cur = deq.back();
			deq.pop_back();
		}
		answer += to_string(cur);					// Integer to String.
		answer += ",";
	}

	if (answer.back() == ',')						// Reorganize output string.
		answer.back() = ']';
	else													// Exception. [Empty array]
		answer += "]";
	return answer;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	string str, arr;									// str = The memory of instructions.			arr = The memory of input data.
	int N;												// N = The size of arr.

	int test_case;
	cin >> test_case;
	for (int t = 1; t <= test_case; t++)
	{
		cin >> str;
		cin >> N >> arr;

		cout << Simulation(str, arr) << endl;
	}
}