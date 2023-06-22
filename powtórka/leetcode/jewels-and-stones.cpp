#include <iostream>
#include <iostream>

using namespace std;

class Solution
{
  public:
    int numJewelsInStones(string jewels, string stones)
    {
      int count = 0;
      for(int i = 0; i < stones.size(); i++)
      {
        char curr = stones[i];
        for(int i = 0; i < jewels.size(); i++)
        {
          if(curr == jewels[i]) count += 1;
        }
      }
      return count;
    }
};

int main()
{
  string jewels, stones;
  cin >> jewels >> stones;
  Solution mySolution;
  cout << mySolution.numJewelsInStones(jewels, stones) << endl;

  return 0;
}
