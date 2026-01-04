#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==val)
            {
              cout << "Value encountered"  << endl;
                for(int j = i ; j < nums.size() ;j++)
                {
                    swap(nums[j],nums[j+1]);
                }
                nums.pop_back();
            }
            if (nums[i - 1] == nums[i])
              i--;
            if (nums.size() == 1 && nums[i] == val)
              nums.pop_back();
        }
        for(int i = 0 ; i< nums.size() ; i++)
        {
          cout << nums[i] << " ";
        }
        cout << endl;
        return nums.size();
    }
    int removeDuplicates(vector<int> &nums)
    {
      for (int i = 0; i < nums.size(); i++)
      {
        for (int j = 0; j < nums.size(); i++)
        {
          if (i != j && nums[i] == nums[j])
          {
            for (int k = j; k < nums.size(); k++)
            {
              swap(nums[k], nums[k + 1]);
            }
            nums.pop_back();
          }
        }
      }
      return nums.size();
    }
int main()
{
  vector<int> arr = {1,1,2};
  cout << "elements before : " << arr.size() << " And now after : " << removeDuplicates(arr);
}