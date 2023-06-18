#include <iostream>
#include <cmath>

using namespace std;

double fun(double A, int n)
{
	double x_k = A;
	double x_kpl1;
	for(int i = 0; i < 1000; i++)
	{
		x_kpl1 = (1.0/n)*((n - 1) * x_k + A / (pow(x_k, n - 1)));
		if(x_kpl1 == x_k) return x_kpl1;
		x_k = x_kpl1;
	}
	return x_kpl1;
}

int main()
{
	double A;
	int n;
	cout << "Podaj liczbe: ";
	cin >> A;
	cout << "Podaj stopień pierwiastka: ";
	cin >> n;
	cout << "Wartość pierwiastka: " << fun(A, n) << endl;

	return 0;
}
