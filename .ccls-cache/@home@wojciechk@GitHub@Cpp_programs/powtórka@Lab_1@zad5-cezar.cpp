#include <iostream>

using namespace std;

void cezar(string ciag)
{
  const int k = 1;
  int s = ciag.size();
  for(int i = 0; i < s; i++)
  {
    if(ciag[i] >= 65 && ciag[i] <= 90)
    {
      if((ciag[i] + k) > 90) cout << char(64 + ((ciag[i] + k) - 90));
      else cout << char(ciag[i] + k);
    }
    if(ciag[i] >= 97 && ciag[i] <= 122)
    {
      if((ciag[i] + k) > 122) cout << char(96 + ciag[i] + k - 122);
      else cout << char(ciag[i] + k);
    }
  }
}

int main()
{
  string ciag;
  cout << "Podaj ciąg znaków: ";
  cin >> ciag;
  cezar(ciag);

  return 0;
}
