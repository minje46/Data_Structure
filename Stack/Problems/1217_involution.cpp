#include<iostream>
#pragma warning(disable:4996)
using namespace std;

int Involution(int a, int b)				// To calculate the a^b formula.
{
	if (b == 1)				// Base condition.
		return a;

	return a*Involution(a, b - 1);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);
	
	freopen("input.txt", "r", stdin);
	int test_case;
	for (int t = 1; t <= 10; t++)
	{
		cin >> test_case;

		int a, b;
		cin >> a >> b;

		cout << "#" << test_case << " " << Involution(a, b) << endl;
	}
}