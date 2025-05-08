#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prevMap;
        for(int i = 0; i < nums.size(); i++)
        {
            if(prevMap.find(target - nums[i]) != prevMap.end())
                return {i, prevMap[target - nums[i]]};
            prevMap[nums[i]] = i;
        }
        return {};
    }
};