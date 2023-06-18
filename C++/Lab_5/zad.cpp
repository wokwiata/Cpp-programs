#include <iostream>

using namespace std;

class Fraction
{;
	private:
		double nominator, denominator;
	
	public:
		//konstruktor
		Fraction(double x, double y)
		{
			if(y == 0)
			{
				cout << "Denominator == 0" << endl;
				exit(EXIT_FAILURE);
			}
			nominator = x;
			denominator = y;
		}
		//funckja add klasy Fraction
		Fraction add();

		void print() const
		{
			cout << nominator << "/" << denominator << endl;
		}

		double evaluate() const
		{
			return (double)nominator / denominator;
		}
};
