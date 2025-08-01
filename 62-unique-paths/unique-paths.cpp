class Solution {
public:
    int path(int m, int n, vector<vector<int>> &dp){
        if(m==0) return 1;
        if(n==0) return 1;

        if(dp[m][n]!=-1) return dp[m][n];

        int up = dp[m-1][n] = path(m-1,n,dp);
        int left = dp[m][n-1] = path(m,n-1,dp);

        return up+left;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return path(m-1,n-1,dp);
    }
};