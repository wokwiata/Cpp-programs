#include <iostream>
#include <string>

using namespace std;

class Solution
{
  public:
    Solution(){}
    string defangIPaddr(string address)
    {
      int count = 0;
      for(int i = 0; i < address.size(); i++)
      {
        if(address[i] == '.') count += 2;
      }
      char arr[address.size() + count];
      int index = 0;
      for(int i = 0; i < address.size(); i++)
      {
        if(address[i] == '.')
        {
          arr[index] = '[';
          arr[index + 1] = '.';
          arr[index + 2] = ']';
          index += 3;
        }
        else
        { 
          arr[index] = address[i];
          index += 1;
        }

      }

      return string(arr, address.size() + count);
    }
};

int main()
{
  string IP;
  cin >> IP;
  Solution mySolution;
  cout << mySolution.defangIPaddr(IP) << endl;

  return 0;
}
