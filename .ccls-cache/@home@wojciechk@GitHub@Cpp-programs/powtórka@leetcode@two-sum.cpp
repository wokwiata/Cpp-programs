#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
    Solution(){}
    vector<int> twoSum(int* nums, int size,int target)
    {
      vector<int> vec;
      for(int i = 0; i < size; i++)
      {
        int f = nums[i];
        for(int i = i + 1; i < size; i++)
        {
          if(f + nums[i] == target)
          {
            vec.push_back(f);
            vec.push_back(nums[i]);
          }
        }
      }

      return vec;
    }
}; 

int main()
{
  int size, target;
  cin >> size;
  int* nums = new int[size];
  int i= 0;
  while(i < size)
  {
    cin >> nums[i];
    i++;
  }
  cin >> target;
  Solution mySolution;
  vector<int> result = mySolution.twoSum(nums, size, target);
  for(int i = 0; result.size(); i++) cout << result[i] << " ";

  return 0;
}
