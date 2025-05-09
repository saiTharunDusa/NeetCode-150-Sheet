#include <vector>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftMax = height[0], rightMax = height[n - 1], ans = 0;
        int l = 0, r = n - 1;
        while(l < r)
        {
            if(leftMax <= rightMax)
            {
                l++;
                leftMax = max(leftMax, height[l]);
                ans += (leftMax - height[l]);
            }
            else
            {
                r--;
                rightMax = max(rightMax, height[r]);
                ans += (rightMax - height[r]);
            }
        }
        return ans;
    }
};