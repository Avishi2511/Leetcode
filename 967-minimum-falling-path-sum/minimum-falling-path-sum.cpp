class Solution {
public:
    /*
    int fallingPath(vector<vector<int>> &matrix, int i, int j, vector<vector<int>> &dp){
        if (j < 0 || j >= matrix[0].size()) return 1e9; 
        if (i == matrix.size() - 1) return matrix[i][j];

        if(dp[i][j]!=-1) return dp[i][j];

        int dleft = fallingPath(matrix, i+1, j-1, dp);
        int d = fallingPath(matrix, i+1, j, dp);
        int dright = fallingPath(matrix, i+1, j+1, dp);

        return dp[i][j] = matrix[i][j] + min({dleft,d,dright});
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans = 1e9;
        for (int col = 0; col < n; col++) {
            ans = min(ans, fallingPath(matrix, 0, col, dp));
        }
        return ans;
    }
    */

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp = matrix; // start from matrix values

        for (int i = m - 2; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                int down = dp[i + 1][j];
                int dleft = (j > 0) ? dp[i + 1][j - 1] : 1e9;
                int dright = (j < n - 1) ? dp[i + 1][j + 1] : 1e9;
                dp[i][j] += min({down, dleft, dright});
            }
        }

        return *min_element(dp[0].begin(), dp[0].end());
    }
};