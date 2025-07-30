class Solution {
public:
    /*
    int house(vector<int> nums, int i, vector<int> dp){
        if(i==0){
            return nums[0];
        }

        if(i==-1){
            return 0;
        }

        if(dp[i]!=-1){
            return dp[i];
        }

        int pick = nums[i]+house(nums,i-2,dp);
        int non_pick = 0+house(nums,i-1,dp);

        return dp[i] = max(pick, non_pick);
    }
    */
/*
    int rob(vector<int>& nums) {
        
        int i = nums.size()-1;
        int n=nums.size();
        vector<int> dp(n+1, -1);
        return house(nums, i, dp);
        
        int n = nums.size();
        vector<int> dp(n+1);
        dp[0] = nums[0];
        
        for(int i=1;i<nums.size();i++){
            int take = nums[i];
            int non_take;

            if(i>1){
                take += dp[i-2];              
            }
            non_take = 0 + dp[i-1];

            dp[i] = max(take, non_take); 
        }

        return dp[n-1];
        */

/*
        //Space optimised
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;

        for(int i=1;i<n;i++){
            int take = nums[i];

            if(i>1) take+=prev2;

            int not_take = 0+prev;
            int current_i = max(take,not_take);
            prev2 = prev;
            prev = current_i;
        }

        return prev;
    }
*/

    int func(vector<int>& nums, int i, vector<int>& dp){
        
        if(i>=nums.size()){
            return 0;
        }

        if(dp[i] != -1) return dp[i];

        int pick = nums[i]+func(nums,i+2,dp);
        int notpick = func(nums,i+1,dp);

        dp[i] = max(pick, notpick);
        return dp[i];

    }

    int rob(vector<int>& nums){

        int n = nums.size();
        vector<int> dp(n+1, -1);
        return func(nums,0,dp);
    }

};