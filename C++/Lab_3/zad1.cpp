#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(nullptr));
	const int N = 15;
	int arr[N];
	int min = 97;
	int max = 122;
	for(int i = 0; i < N; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
		cout << char(arr[i] - 32) << endl;
	}
	cout << "Odwrocona tablica: " << endl;
	for(int i = (N - 1); i >= 0; i--)
	{
		cout << char(arr[i] - 32) << endl;
	}

	return 0;
}
