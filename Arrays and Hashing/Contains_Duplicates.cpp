#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    /*
        If any element is repeating twice, then we have to return true or else false.
        So we can maintain an unordered set. It contains all the unique elements, 
        if the set size is equal to nums size. Then, it means nums has all unique elements, and 
        we have to return false for that. Or else we return true.
    */
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(auto it : nums)
            st.insert(it);
        return !(st.size() == nums.size());
    }
};