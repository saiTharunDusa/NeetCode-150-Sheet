#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        vector<int> ans;
        while(l < r)
        {
            int sum = numbers[l] + numbers[r];
            if(sum > target)
                r--;
            else if(sum < target)
                l++;
            else
            {
                ans.push_back(l + 1);
                ans.push_back(r + 1);
                break;
            }
        }
        return ans;
    }
};