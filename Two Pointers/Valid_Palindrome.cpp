#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool alphaNumeric(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) return true;
        return false;
    }
    bool isPalindrome(string s) {
        int n = s.length();
        int left = 0, right = n - 1;
        while(left <= right)
        {
            while(left < right && !alphaNumeric(s[left]))
                left++;
            while(right > left && !alphaNumeric(s[right]))
                right--;
            if(tolower(s[left]) != tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;
    }
};