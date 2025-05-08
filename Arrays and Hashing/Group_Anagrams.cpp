#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;
        for(int i = 0; i < strs.size(); i++)
        {
            string s = "", str = strs[i];
            vector<int> count(26, 0);
            for(auto ch : str)
                count[ch - 'a']++;
            for(int i = 0; i < 26; i++)
                s += 'a' + count[i];
            mpp[s].push_back(strs[i]);
        }
        for(auto it : mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};