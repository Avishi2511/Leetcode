class Solution {
public:
    int path(int m, int n, vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp){
        if (m < 0 || n < 0) return 0; //this condition was added since even in first row and column
        // there can be an obstacle, and so the base case is only 1 which is the starting [0][0] cell
        
        if (obstacleGrid[m][n] == 1) return 0;

        if (m == 0 && n == 0) return 1; //base case (starting cell not complete first row and column)

        if (dp[m][n] != -1) return dp[m][n];

        int up = path(m - 1, n, obstacleGrid, dp);
        int left = path(m, n - 1, obstacleGrid, dp);

        return dp[m][n] = up + left;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));
        return path(m - 1, n - 1, obstacleGrid, dp);
    }
};