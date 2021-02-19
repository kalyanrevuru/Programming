#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int s = str.size();
		char arr[s][s];
		for (int i = 0; i < s; i++)
		{
			for (int j = 0; j < s; j++)
			{
				arr[i][j] = ' ';
			}
		}
		for (int i = 0; i < s; i++)
		{
			arr[i][i] = str[i];
			arr[i][s - i - 1] = str[s - i - 1];
		}

		for (int i = 0; i < s; i++)
		{
			for (int j = 0; j < s; j++)
			{
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
