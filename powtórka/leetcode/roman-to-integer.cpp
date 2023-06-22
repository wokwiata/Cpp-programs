#include <iostream>
#include <string>

using namespace std;

class Solution
{ 
  public:
    Solution(){}
    int romanToInt(string s)
    {
      int number = 0;
      for(int i = 0; i < s.size(); i++)
      {
        switch(s[i])
        {
          case 73:
            if(s[i + 1] == 86 || s[i + 1] == 88)
            {
              number -= 1;
              break;
            }
            number += 1;
            break;
          case 86:
            number += 5;
            break;
          case 88:
            if(s[i + 1] == 76 || s[i + 1] == 67)
            {
              number -= 10;
              break;
            }
            number += 10;
            break;
          case 76:
            number += 50;
            break;
          case 67:
            if(s[i + 1] == 68 || s[i + 1] == 77)
            {
              number -= 100;
              break;
            }
            number += 100;
            break;
          case 68:
            number += 500;
            break;
          case 77:
            number += 1000;
            break;
          default:
            cout << "Wrong text";
          break;
        }
      }
      return number;
    }
};

int main(int argc, char* argv[])
{
  string s;
  cin >> s;
  Solution mySolution;
  cout << mySolution.romanToInt(s) << endl;

  return 0;
}
