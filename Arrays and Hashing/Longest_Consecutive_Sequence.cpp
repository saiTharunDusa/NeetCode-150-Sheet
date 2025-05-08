#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxLen = 0;
        for(auto num : st)
        {
            if(st.find(num - 1) == st.end())
            {
                int len = 1;
                while(st.find(num + 1) != st.end())
                {
                    num++;
                    len++;
                }
                maxLen = max(maxLen, len);
            }
        }
        return maxLen;
    }
};