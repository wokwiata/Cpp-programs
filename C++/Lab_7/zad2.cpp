#include <iostream>

using namespace std;

class Figure
{
	private:
		double X, Y;
	public:
		Figure(double x, double y)
		{
			X = x;
			Y = y;
		}
		virtual double area()
		{
			return 0;
		}
		virtual void print()
		{
			cout << "Punkty zaczepienia figury X: " << X << " Y: " << Y << endl;
		}
};

class Rectangle : public Figure
{
	public:
		double Width, Height;
		Rectangle(double x, double y, double width, double height) : Figure(x, y)
		{
			Width = width;
			Height = height;
		}
		double area() override
		{
			Figure::area();
			return Width * Height;
		}
		void print() override
		{
			Figure::print();
			cout << "Width: " << Width << " Height: " << Height << endl;
		}
};

class Circle : public Figure
{
	public:
		double Radius;
		Circle(double x, double y, double radius) : Figure(x, y)
		{
			Radius = radius;
		}
		double area() override
		{
			Figure::area();
			return Radius * Radius;
		}
		void print() override
		{
			Figure::print();
			cout << "Radius: " << Radius << endl;
		}
};

int main()
{
	Rectangle rectangle1(3.15, 5.34, 4, 2.5);
	rectangle1.print();
	cout << "Pole prostokąta: " << rectangle1.area() << "\n----------------------------" << endl;
	Circle circle1(7.3, 1.8, 6);
	circle1.print();
	cout << "Pole koła: " << circle1.area() << endl;

	return 0;
}
