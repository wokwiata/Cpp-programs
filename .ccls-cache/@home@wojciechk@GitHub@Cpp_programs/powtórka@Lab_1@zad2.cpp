#include <iostream>

using namespace std;

int main()
{
  unsigned long int N;
  cout << "N: ";
  cin >> N;
  int s = 1;
  for(int i = 1; i <= N; i++)
  {
    s = s * i;
  }
  cout << s << endl;

  return 0;
}
