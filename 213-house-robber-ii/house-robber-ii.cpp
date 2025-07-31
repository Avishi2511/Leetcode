class Solution {
public:
    // use the same approach as house robber 1, 
    // but call the function twice one from 0 to n-2 and other from 1 to n-1

    int house(vector<int> &nums, int i, int n, vector<int> &dp){
        if(i>n) return 0;

        if(dp[i]!=-1) return dp[i];

        int pick = nums[i] + house(nums, i+2, n, dp);
        int notpick = house(nums, i+1, n, dp);

        return dp[i] = max(pick,notpick);
    }

    int rob(vector<int> &nums){
        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);

        int op1 = house(nums,0,n-2,dp1);
        int op2 = house(nums,1,n-1,dp2);

        return max(op1, op2);

    }
};