#include <iostream>

using namespace std;

class Car
{
	public:
		string name;
		string model;
		int year;
		Car(string x, string y, int z)
		{
			name = x;
			model = y;
			year = z;
		}
};


int main()
{
	Car car1("Audi", "Rs7", 2023);
	cout << car1.name << car1.model << car1.year << endl;
	return 0;
}







