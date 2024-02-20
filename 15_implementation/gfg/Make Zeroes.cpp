/*
        Input: matrix = {{1, 2, 3, 4},
                         {5, 6, 0, 7}, 
                         {8, 9, 4, 6},
                         {8, 4, 5, 2}}
        Output: {{1, 2, 0, 4}, 
                 {5, 0, 20, 0},
                 {8, 9, 0, 6}, 
                 {8, 4, 5, 2}}
    */

    void MakeZeros(vector<vector<int> >& matrix) {
        vector<vector<int> > ans = matrix;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == 0) {
                    int sum = 0;
                    if(i-1 >= 0) {
                        sum += matrix[i-1][j];
                        ans[i-1][j] = 0;
                    }
                    if(i+1 < n) {
                        sum += matrix[i+1][j];
                        ans[i+1][j] = 0;
                    }
                    if(j-1 >= 0) {
                        sum += matrix[i][j-1];
                        ans[i][j-1] = 0;
                    }
                    if(j+1 < m) {
                        sum += matrix[i][j+1];
                        ans[i][j+1] = 0;
                    }
                    ans[i][j] = sum;
                }
            }
        }
        matrix.swap(ans);
    }