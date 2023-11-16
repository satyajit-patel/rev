class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        /*
            row_0 -> 1
            row_1 -> 1 1
            row_2 -> 1 2 1
            row_3 -> 1 3 3 1
            row_4 -> 1 4 6 4 1
        */
        vector<vector<int>> grid(numRows);
        for(int i=0; i<numRows; i++) {
            grid[i] = vector<int>(i+1, 1);
            for(int j=1; j<i; j++) {
                grid[i][j] = grid[i-1][j-1]+grid[i-1][j]; 
            }
        }
        // if(numRows >= 5) {
        //     // 4C2
        //     cout<<grid[4][2];
        // }
        return grid;
    }
};