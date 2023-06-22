#include <iostream>

using namespace std;

class Solution
{
  public:
    Solution(){}
    bool canConstruct(string ransomNote, string magazine)
    {
      bool d;
      int f = 0;
      if(ransomNote.size() > magazine.size()) return 1;
      for(int i = 0; i < ransomNote.size(); i++)
      {
        char curr = ransomNote[i];
        for(int i = 0; i < magazine.size() && i > f; i++)
        {
          if(magazine[i] == curr)
          {
            d = true;
            f = i;
          }
          else d = false;
        }
      }
      return d;
    }
};

int main()
{
  string ransomNote, magazine;
  cin >> ransomNote >> magazine;
  Solution mySolution;
  if(mySolution.canConstruct(ransomNote, magazine) == true) cout << "true" << endl;
  else cout << "false" << endl;

  return 0;
}
