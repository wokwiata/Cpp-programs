#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(nullptr));
	const int N = 20;
	const int N2 = 30;
	int mer_arr[N2];
	for(int i = 0; i < N2; i++)
	{
		int arr[N];
		int sum = 0;
		for(int i = 0; i < N; i++)
		{
			arr[i] = rand() % 100;
			cout << arr[i] << endl;
			sum += arr[i]; 
		}
		int avrg = sum / N;
		cout << "Suma wszystkich liczb: " << sum << endl;
		cout << "Średnia arytmetyczna wszystkich liczb: " << avrg << endl;
		mer_arr[i] = avrg;
	}
	int min, max;
	max = mer_arr[0];
	min = mer_arr[N2 - 1];
	int sum = 0;
	cout << "Złączona tablica: " << endl;
	for(int i = 0; i < N2; i++)
	{
		if(mer_arr[i] < min) min = mer_arr[i];
		else if(mer_arr[i] > max) max = mer_arr[i];
		cout << mer_arr[i] << endl;
		sum += mer_arr[i];
	}
	cout << "Średnia ze średnich : " << sum / N2 << endl;
	cout << "Minmalna wartość: " << min << endl;
	cout << "Maksymalna wartość: " << max << endl;

	return 0;
}
