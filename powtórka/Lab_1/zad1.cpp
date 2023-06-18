#include <iostream>

using namespace std;

int main()
{
  double a, p
  int x;
  cout << "Netto: ";
  cin >> a;
  cout << "Ilość: ";
  cin >> x;
  cout << "Procent: ";
  cin >> p;

  cout << "Wartość netto zakupionego towaru: " << a * x << endl; 
  double v = a * (p / 100);
  cout << "Wartość podatku VAT: " << v << endl;
  cout << "Wartosc brutto towaru: " << v * x << endl; 
  return 0;
}
