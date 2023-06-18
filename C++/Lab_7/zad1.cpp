#include <iostream>
#include <cstring>

using namespace std;

class Animal
{
	private:
		string Name;
		int Age;
	public:
		Animal(string name, int age)
		{
			Name = name;
			Age = age;
		};
		virtual void print()
		{
			cout << "Name: " << Name << " " << "Age: " << Age << " ";
		}
		friend ostream& operator<<(ostream& output, const Animal& animal)
		{
			output << animal.Name << " " << animal.Age << endl;
			return output;
		}
};

class Horse : public Animal
{
	public:
		string Breed;
		int Height;
		Horse(string name, int age, string breed, int height) : Animal(name, age)
		{
			Breed = breed;
			Height = height;
		}
		void print() override
		{
			Animal::print();
			cout << "Breed: " << Breed << " " << "Height: " << Height << endl;
		}
};

class Dog : public Animal
{
	public:
		double Weight;
		Dog(string name, int age, double weight) : Animal(name, age)
		{
			Weight = weight;
		}
		void print() override
		{
			Animal::print();
			cout << "Weight: " << Weight << endl;
		}
};

int main()
{
	Horse horse1("Jacuś", 17, "arabski", 150);
	horse1.print();
	Dog dog1("Piri", 7, 13);
	dog1.print();

	return 0;
}
