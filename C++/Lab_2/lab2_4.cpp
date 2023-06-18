#include <iostream>

using namespace std;

bool is_prime(int n)
{
	if(n <= 1) return false;
	for(int i = 2; i <= n / 2; i++)
	{
		if(n % i == 0) return false;
	}
	return true;
}

void print_primes(int m, int n)
{
	cout << "Liczby pierwsze z przedziału [" << m << ", " << n << "]:" << endl;
	for(int i = m; i <= n; i++)
	{
		if(is_prime(i) == 1) cout << i << endl;
	}
}

int num_primes(int m, int n)
{
	int c = 0;
	for(int i = m; i <= n; i++)
	{
		if(is_prime(i) == 1) c++;
	}
	return c;
}

int main()
{
	print_primes(50, 150);
	int m = 1;
	int n = 100;
	for(int i = 1; i <= 10; i++)
	{
		cout << "Ilość liczb pierwszych z przedziału [" << m << ", " << n << "]: ";
		cout << num_primes(m, n) << endl;
		m += 100;
		n += 100;
	}

	return 0;
}
