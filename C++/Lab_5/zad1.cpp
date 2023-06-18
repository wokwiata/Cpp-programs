#include <iostream>

class Fraction
{
	public:
		Fraction(int x, int y)
		{
			if(y == 0) cout << "Error: denominator can't be 0.";
			else
			{
				nominator = x;
				denominator = y;
			}
		}
		Fraction add(Fraction n)
	private:
		int nominator;
		int denominator;
};
