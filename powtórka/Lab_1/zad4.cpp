#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fun(int X)
{
  int min = 0;
  int max = 10;
  int n
  do
  {
    n = rand() % (max - min + 1) + min;
    if(n == X)
    {
      cout << "Wylosowana liczba to: " << n << endl;
      return;
    }
    cout << n << " to zła liczba, spróbuj ponownie." << endl;
    if(n > X) max = n;
    if(n < X) min = n;
  } while(n != X);
}

int main()
{
  srand(time(nullptr));
  int X = rand() % 11;
  fun(X);

  return 0;
}
