#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand48(time(nullptr));
	int N;
	cout << "Podaj wielkość tablicy: ";
	cin >> N;
	double t1[N];
	cout << "Tablica t1: " << endl;
	for(int i = 0; i < N; i++)
	{
		t1[i] = drand48() * 101;
		if(t1[i] >= 100.0) t1[i] = 100.0;
		cout << t1[i] << endl;
	}
	double t2[(N + 1) / 2];
	cout << "\nTablica t2: " << endl;
	int j = 0;
	for(int i = 0; i < (N + 1) / 2; i++)
	{
		if(N <= 1)
		{
			cout << t1[j] << endl;
			return 0;
		}
		t2[i] = (t1[j] + t1[j + 1]) / 2;
		j += 2;
	}
	 
	if(N % 2 != 0)
	{
		t2[((N + 1) / 2) - 1] = t1[N - 1];
		for(int i = 0; i < (N + 1) / 2; i++)
		{
			cout << t2[i] << endl;
		}
	}
	else
	{
		for(int i = 0; i < (N + 1) / 2; i++) cout << t2[i] << endl;
	}

	return 0;
}
