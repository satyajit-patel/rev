class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> grid[3][3]; // 2D arrays of set
        set<char> cols[9], rows[9]; // 1D arrays of set
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                char ch = board[i][j];
                if(ch == '.') {continue;}
                if(rows[i].count(ch)) {return false;}
                if(cols[j].count(ch)) {return false;}
                if(grid[i/3][j/3].count(ch)) {return false;}
                rows[i].insert(ch);
                cols[j].insert(ch);
                grid[i/3][j/3].insert(ch);
            }
        }
        return true;
    }
};