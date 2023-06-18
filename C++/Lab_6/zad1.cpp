#include <iostream>

using namespace std;

class Complex
{
	public:
		double Re, Im;
		Complex(double re, double im)
		{
			Re = re;
			Im = im;
		}
		Complex& operator+=(const Complex& c)
		{
			Re += c.Re;
			Im += c.Im;
			return *this;
		}
		Complex& operator-=(const Complex& c)
		{
			Re -= c.Re;
			Im -= c.Im;
			return *this;
		}
		Complex& operator*=(const Complex& c)
		{
			double tempRe = Re * c.Re - Im * c.Im;
			double tempIm = Re * c.Im + Im * c.Re;
			Re = tempRe;
			Im = tempIm;
			return *this;
		}
		Complex& operator /= (const Complex& c)
		{
			double div = c.Re * c.Re + c.Im * c.Im;
			double tempRe = (Re * c.Re + Im * c.Im) / div;
			double tempIm = (Im * c.Re - Re * c.Im) / div;
			Re = tempRe;
			Im = tempIm;
			return *this;
		}
		friend Complex operator+(const Complex& c1, const Complex& c2);
		friend Complex operator-(const Complex& c1, const Complex& c2);
		friend Complex operator*(const Complex& c1, const Complex& c2);
		friend Complex operator/(const Complex& c1, const Complex& c2);
		friend ostream& operator<<(ostream& os, const Complex& c);
};

Complex operator+(const Complex& c1, const Complex& c2)
{
	Complex result(c1.Re + c2.Re, c1.Im + c2.Im);
	return result;
}

Complex operator-(const Complex& c1, const Complex& c2)
{
	Complex result(c1.Re - c2.Re, c1.Im - c2.Im);
	return result;
}

Complex operator*(const Complex& c1, const Complex& c2)
{
	Complex result(c1.Re * c2.Re - c1.Im * c2.Im, c1.Re * c2.Im + c1.Im * c2.Re);
	return result;
}

Complex operator/(const Complex& c1, const Complex& c2)
{
	double denominator = c2.Re * c2.Re + c2.Im * c2.Im;
	Complex result((c1.Re * c2.Re + c1.Im * c2.Im) / denominator, (c1.Im * c2.Re - c1.Re * c2.Im) / denominator);
	return result;
}

ostream& operator<<(ostream& os, const Complex& c)
{
	os << c.Re;
	if(c.Im >= 0) os << " + ";
	os << c.Im << "i";
	return os;
}

int main()
{
	Complex c1(2.3, 1.8);
	Complex c2(-3.2, 4.6);

	Complex sum = c1 + c2;
	Complex subtraction = c1 - c2;
	Complex multiplication = c1 * c2;
	Complex divison = c1 / c2;

	cout << "C1: " << c1 << endl;
	cout << "C2: " << c2 << endl;
	cout << "Sum: " << sum << endl;
	cout << "Subtraction: " << subtraction << endl;
	cout << "Multiplication: " << multiplication << endl;
	cout << "Division: " << divison << endl;
	
	return 0;
}
