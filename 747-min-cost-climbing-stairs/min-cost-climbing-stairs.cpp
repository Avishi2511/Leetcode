class Solution {
public:
    //int minCost(vector<int> &cost, int i, vector<int> &dp){
        /* Recursion - TLE
        if(i>=cost.size()) return 0;

        if(i==cost.size()-1 || i==cost.size()-2) return cost[i]; 

        int step1 = minCost(cost, i+1);
        int step2 = minCost(cost, i+2);

        return cost[i] + min(minCost(cost, i+1),minCost(cost, i+2));
        */

        //dp, still TLE
        /*
        if(i>=cost.size()) return 0;

        if(dp[i]!=-1) return dp[i];

        int step1 = minCost(cost, i+1, dp);
        int step2 = minCost(cost, i+2, dp);

        return dp[i] = cost[i] + min(step1, step2);
        */
    //}
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
        //return min(minCost(cost,0, dp), minCost(cost, 1, dp));

        //optimized
        int n = cost.size();

        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i=2;i<cost.size();i++){
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }

        return min(dp[n-1], dp[n-2]);

    }
};