#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mpp;
        vector<vector<int>> freq(n + 1);
        for(auto it : nums)
            mpp[it]++;
        for(auto it : mpp)
            freq[it.second].push_back(it.first);
        for(int i = n; i >= 0; i--)
        {
            for(auto n : freq[i])
            {
                ans.push_back(n);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};