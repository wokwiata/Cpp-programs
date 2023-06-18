#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(nullptr));
  const int N = 15;
  int min = 97;
  int max = 122;
  char arr[N];
  for(int i = 0; i < N; i++)
  {
    arr[i] = char(rand() % (max - min + 1) + min);
    arr[i] = char(arr[i] - 32);
    cout << arr[i] << endl;
  }

  return 0;
}
