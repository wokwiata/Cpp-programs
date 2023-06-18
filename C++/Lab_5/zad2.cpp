#include <iostream>
#include <cmath>

using namespace std;

class point
{
	public:
		explicit point(double x = 0., double y = 0.) : x{x}, y{y} {}
		void print() const
		{
			cout << "[" << x << ", " << y << "]";
		}
		[[nodiscard]]
		double distance(const point &p) const
		{
			double dx = x - p.x;
			double dy = y - p.y;
			return sqrt(dx * dx + dy * dy);
		}
	private:
		double x, y;
};

class triangle
{
	public:
		triangle(const point &p1, const point &p2, const point &p3) : p1{p1}, p2{p2}, p3{p3}
		{
			sides();
			if(!is_triangle())
			{
				error("not a triangle");
			}
		}
		triangle(double x1, double y1, double x2, double y2, double x3, double y3) :
			p1{x1, y1}, p2{x2, y2}, p3{x3, y3}
		{
			if(!is_triangle()) error("not a triangle");
		}
		[[nodiscard]]
		point get_p1() const
		{
			return p1;
		}
		[[nodiscard]]
		point get_p2() const
		{
			return p2;
		}
		[[nodiscard]]
		point get_p3() const
		{
			return p3;
		}
		void setp1(const point &p)
		{
			p1 = p;
			sides();
			if(!is_triangle()) error("not a triangle");
		}
		[[nodiscard]]
		bool is_equilateral()const
		{
			if(!is_zero(a - b)) return false;
		}
		[[nodiscard]]
		bool is_isoscales()
		{
			if(is_zero(a - b)) return true;
			if(is_zero(a - c)) return true;
			if(is_zero(b - c)) return true;
			return false;
		}
		bool is_rectangular()
		{
			if(is_zero((a*a - b*b - c*c)) return true;
			if(is_zero((b*b - a*a - c*c)) return true;
			if(is_zero((c*c - a*a - b*b)) return true;
			return false;
		}
		void print() const
		{
		cout << "(";
		p1.print(p1);
		cout << ", ";
		p2.print();
		cout << ", ";
		p3.print();
		cout << ")" << endl;
		}
		[[nodiscard]]
		double perimeter() const
		{
			return a + b + c;
		}
		double area() const
		{
			double p = perimeter()
		}

	private:
		point p1, p2, p3;
		double a, b, c;
		void sides()
		{
			a = p2.distance(p3);
			b = p2.distance(p3);
			c = p2.distance(p3);
		}
		bool is_triangle() const
		{
			if(a >= b + c) return false;
			if(b >= a + c) return false;
			if(c >= a + b) return false;
			return true;
		}
		static void error(const string &str)
		{
			cout << "Error: " << str << endl;
			exit(EXIT_FAILURE);
		}
		bool is_zero(double d)
		{
			double eps{1e-10};
			return fabs(d) < eps;
		}
};

int main()
{
	point p1{3, 4}, p2{5, 2}, p3{1, 6};
	triangle t{p1, p2, p3};
	t.print();
	cout << boolalpha;
	cout << t.is_equilateral() << endl;
	cout << t.is_isoscales() << endl;
	cout << t.is_rectangular() << endl;
	cout << t.area() << endl;
	cout << t.perimeter() << endl;

	return EXIT_SUCCESS;
}





