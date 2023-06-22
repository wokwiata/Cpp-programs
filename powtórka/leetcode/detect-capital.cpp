#include <iostream>
#include <string>

using namespace std;

class Solution
{
  public:
    bool detectCapitalUse(string word)
    {
      for(int i = 0; i < word.size(); i++)
      {
        if(word[i] < 123 && word[i] > 96)
        {
          for(int i = 1; i < word.size(); i++)
          {
            if(word[i] < 123 && word[i] > 96) continue;
            else return false;
          }
        }
        if(word[i] > 64 && word[i] < 91)
        {
          for(int i = 1; i < word.size(); i++)
          {
            if(word[i] > 94 && word[i] < 91) continue;
            else return false;
          }
        }
      }
      return true;
    }
};

int main()
{
  string word;
  cin >> word;
  Solution mySolution;
  if(mySolution.detectCapitalUse(word) == true) cout << "true" << endl;
  else cout << false;

  return 0;
}
