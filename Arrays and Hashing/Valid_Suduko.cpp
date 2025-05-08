#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, cols;
        map<pair<int, int>, unordered_set<char>> gridX3;
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] == '.') continue;
                char ch = board[i][j];
                pair<int, int> p = {i/3, j/3};
                
                if(rows[i].count(ch) > 0 || cols[j].count(ch) > 0 || gridX3[p].count(ch) > 0)
                    return false;
                
                rows[i].insert(ch);
                cols[j].insert(ch);
                gridX3[p].insert(ch);
            }
        }
        return true;
    }
};