class Solution {
public:
    int fibdp(int i, vector<int> &dp){
        if(i==1) return 1;
        if(i==0) return 0;
        if(dp[i]!=-1) return dp[i];
        dp[i] = fibdp(i-1,dp) + fibdp(i-2, dp);
        return dp[i];
    }
    int fib(int n) {
        vector<int> dp(31,-1);
        return fibdp(n,dp);
    }
};