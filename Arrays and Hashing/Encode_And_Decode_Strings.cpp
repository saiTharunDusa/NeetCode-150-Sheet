#include <string>
#include <vector>

using namespace std;


class Solution {
public:

    string encode(vector<string>& strs) {
        vector<int> sizes;
        string s = "";
        for(auto str : strs)
            sizes.push_back(str.length());
        for(auto sz : sizes)
            s += to_string(sz) + ",";
        s += "#";
        for(auto str : strs)
            s += str;
        return s;
    }
    vector<string> decode(string s) {
        vector<string> ans;
        vector<int> sizes;
        int i = 0;
        while(s[i] != '#')
        {
            string currNum = "";
            while(s[i] != ',')
            {
                currNum += (s[i]);
                i++;
            }
            i++;
            sizes.push_back(stoi(currNum));
        }
        i++;
        for(auto sz : sizes)
        {
            ans.push_back(s.substr(i, sz));
            i += sz;
        }
        return ans;
    }
};
