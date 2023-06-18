#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Podaj rozmiar macierzy kwadratowej z zakresu [1, 1000], n: ";
	cin >> n;
	while(n > 1000 || n < 1)
	{
		cout << "Z zakresu [1, 1000]: ";
		cin >> n;
	}
	int arr[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << "[" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++) cout << arr[i][j] << " ";
		cout << endl;
	}
	bool is_triangular = true;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i][j] != 0) is_triangular = false;
		}
	}
	cout << endl;
	if(is_triangular == 1) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
