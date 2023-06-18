#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

class Polynomial
{
	public:
		Polynomial(int n, bool rnd = true) : n{n}, coefficients{new double [n + 1]}
		{
			if(rnd)
			{
				for(int i = 0; i <= n; ++i)
				{
					coefficients[i] = 10.*((double) rand() / RAND_MAX) -5.;					
				}
			}
			else
			{
				memset(coefficients, 0, (n + 1) * sizeof(double));
			}
		}
		Polynomial(const Polynomial &p) : n{p.n}, coefficients{new double [n + 1]}
		{
			memcpy(coefficients, p.coefficients, (n + 1) * sizeof(double));
		}
		~Polynomial()
		{
			delete[] coefficients;
		}
		ostream& print(ostream &os) const
		{
			for(int i = 0; i <= n; i++)
			{
				os << (coefficients[i] >= 0 ? " + " : " - ") << fabs(coefficients[i]) << "x^" << i;
			}
			return os << endl;
		}
		Polynomial derivative()const
		{
			Polynomial p{n - 1, false};
			for(int i = 1; i <= n; ++i)
			{
				p.coefficients[i - 1] = coefficients[i] * i;
			}
			return p;
		}
		[[nodiscard]] int get_n() const {return n;}
		
		double&  operator[](int index)
		{
			return coefficients[index];
		}


		double operator[](int index) const
		{
			return coefficients[index];
		}
	private:
		int n;
		double* coefficients;
};

Polynomial operator+(const Polynomial &p1, const Polynomial &p2)
{
	if(p1.get_n() >= p2.get_n())
	{
		Polynomial p{p1};
		for(int i = 0; i <= p2.get_n(); ++i)
		{
			p[i] += p2[i];
		}
		return p;
	}
	else
	{
		Polynomial p{p2};
		for(int i = 0; i<= p1.get_n(); ++i)
		{
			p[i] += p1[i];
		}
		return p;
	}
}


Polynomial operator*(const Polynomial &p1, const Polynomial &p2)
{
	Polynomial p{p1.get_n() + p2.get_n(), false};
	for(int i = 0; i <= p1.get_n(); ++i)
	{
		for(int j = 0; j <= p2.get_n(); ++j)
		{
			p[i + j] += p1[i] * p2[j];
		}
	}
	return p;
}



ostream &operator<<(ostream & os, const Polynomial &p)
{
	return p.print(os);
}


int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	Polynomial p1(n1);
	Polynomial p2(n2);
	cout << p1 << p2;
	cout << p1.derivative() << p2.derivative();
	cout << p1 + p2;
	cout << p1 * p2;

	return EXIT_SUCCESS;
}


