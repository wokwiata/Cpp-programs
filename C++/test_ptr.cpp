#include <iostream>

using namespace std;

int main()
{
	string name = "Wojtek";
    string* ptr = &name;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &name << endl;
    return 0;
    // * - wartosc, & - adres
}
