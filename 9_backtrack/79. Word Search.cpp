class Solution {
public:
    int dx[4] = {0, +1, -1, 0}; // right down up left
    int dy[4] = {+1, 0, 0, -1};
    std::string word;
    std::vector<std::vector<char>> board;

    bool valid(int i, int j) {
        return i>=0 && i<board.size() && j>=0 && j<board[i].size();
    }

    bool f(int i, int j, int index) {
        // base case
        if(index >= word.size()) return true;
        if(!valid(i, j)) return false;
        if(board[i][j] != word[index]) return false;

        // recursive case
        char ch = board[i][j]; 
        board[i][j] = '#'; // backtrack begin
        for(int ind=0; ind<4; ind++) {
            int ni = i + dx[ind];
            int nj = j + dy[ind];
            if(f(ni, nj, index+1)) return true;
        }
        board[i][j] = ch; // backtrack end

        // return case
        return false;
    }

    bool exist(vector<vector<char>>& _board, string _word) {
        word.clear(), word = _word;
        board.clear(), board = _board;
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[i].size(); j++) {
                if(f(i, j, 0)) return true;
            }
        }
        return false;
    }
};