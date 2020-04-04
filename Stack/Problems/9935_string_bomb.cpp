#include<iostream>
#include<string>

#define  MAX 1000001

using namespace std;

string A, B;													// A = The input string.					B = The bomb string.
int idx = 0;													// idx = The index of answer.		
char answer[MAX];										// answer = The final string after bomb.	

void Simulation()			// To figure out final string after eliminating bomb string.
{
	for (int i = 0; i < A.length(); i++)
	{
		answer[idx++] = A[i];
		if (answer[idx - 1] == B[B.length() - 1])		// if the last character is same as bomb's last one.
		{																// To avoid unnecessary calculation.
			if (idx - B.length() < 0)							// Underflow.
				continue;

			bool flag = true;
			for (int j = 0; j < B.length(); j++)				// Compare whether same or not.
			{
				if (answer[idx - j - 1] != B[B.length() - j - 1])
				{
					flag = false;
					break;
				}
			}
			if (flag)													// If bomb was detected,	
				idx -= B.length();								// [시간을 줄이기 위해 index 조정하는 방식 이용.]
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	cin >> A >> B;

	Simulation();

	if (idx == 0)
		cout << "FRULA" << endl;
	else
	{
		for (int i = 0; i < idx; i++)
			cout << answer[i];
		cout << endl;
	}
}