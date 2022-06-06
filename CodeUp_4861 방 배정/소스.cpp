#include <iostream>
using namespace std;

int main()
{
	int student[6][2] = { };
	int n, k, cnt = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> y >> x;
		student[x - 1][y]++;
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			while (student[i][j] > 0)
			{
				cnt++;
				student[i][j] -= k;
			}
		}
	}

	cout << cnt;
	return 0;
}