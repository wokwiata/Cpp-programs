#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(nullptr));
  int merged_arr[30];
  for(int i = 0; i < 30; i++)
  {
    int arr[20] = {0};
    int suma = 0;
    for(int i = 0; i < 20; i++)
    {
      arr[i] = rand() % 100;
      suma += arr[i];
      cout << arr[i] << " ";
    }
    cout << "\nSuma: " << suma << ", średnia arytmetyczna: " << suma / 20 << endl;
    cout << "-------------------------------------------------------" << endl;
    merged_arr[i] = suma / 20;
  }
  int s = 0;
  int max = merged_arr[29];
  int min = merged_arr[0];
  for(int i = 0; i < 30; i++)
  {
    s += merged_arr[i];
    if(merged_arr[i] > max) max = merged_arr[i];
    if(merged_arr[i] < min) min = merged_arr[i];
  }
  cout << "Średnia: " << s / 30 << endl;
  cout << "Min: " << min << " Max: " << max << endl;

  return 0;
}
