#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 1000;
int grid[MAX_N][MAX_N];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> grid[i][j];
		}
	}
	// max beauty if each row alternates between cow and no cow
	int rows_alternate = 0;
	// max beauty if each column alternates
	int cols_alternate = 0;

	// each row has an alternating pattern of cow and no cow
	for (int i = 0; i < n; i++)
	{
		int sum[2]{};
		// there are two ways to alternate, odd index and even index
		for (int j = 0; j < n; j++)
		{
			sum[j % 2] += grid[i][j];
		}
		rows_alternate += max(sum[0], sum[1]);
	}

	// each column has an alternating pattern of cow and no cow
	for (int i = 0; i < n; i++)
	{
		int sum[2]{};
		// two ways to alternate
		for (int j = 0; j < n; j++)
		{
			sum[j % 2] += grid[j][i];
		}
		cols_alternate += max(sum[0], sum[1]);
	}
	
	cout << max(rows_alternate, cols_alternate) << endl;
}