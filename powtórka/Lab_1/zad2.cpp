#include <iostream>

int main()
{
  double N;
  double silnia(double N)
  {
    if(N = 1) return N;
    N = N * silnia(N - 1);
  }
  silnia(5);

  return 0;
}
