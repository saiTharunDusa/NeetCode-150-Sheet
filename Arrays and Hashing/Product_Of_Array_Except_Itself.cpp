#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int totalProduct = 1, zeroesCount = 0;
        for(auto it : nums)
        {
            if(it != 0)
                 totalProduct *= it;
            else
                zeroesCount += 1;
        }
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != 0)
            {
                if(zeroesCount > 0)
                    ans.push_back(0);
                else
                    ans.push_back(totalProduct / nums[i]);
            }
            else 
            {
                if(zeroesCount == 1)
                    ans.push_back(totalProduct);
                else
                    ans.push_back(0);
            }
        }
        return ans;
    }
};