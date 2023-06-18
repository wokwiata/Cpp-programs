#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, r;
	cout << "Podaj n: ";
	cin >> n;
	cout << "Podaj r, gdzie r < n: ";
	cin >> r;
	int F[n][n];
	cout << "Podaj liczy z zakresu {0, 1}: " << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << "[" << i << "] [" <<  j << "]: ";
			cin >> F[i][j];
		}
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++) cout << F[i][j] << " ";
		cout << endl;
	}
	int W[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			int sum = 0;
			for(int i2 = max(0, i - r); i2 <= min(n - 1, i + r); i2++)
			{
				for(int j2 = max(0, j - r); j2 <= min(n - 1, j + r); j2++)
				{
					if(abs(i - i2) + abs(j - j2) <= r) sum += F[i2][j2];
				}
			}
			W[i][j] = sum;
		}
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++) cout << W[i][j] << " ";
		cout << endl;
	}

	return 0;
}
