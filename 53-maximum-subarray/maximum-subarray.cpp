class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //Brute - gives TLE
        /*
        int maxSum = -100000;

        for(int i=0;i<nums.size();i++){
            int sum = 0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                maxSum = max(maxSum,sum);
            }
        }

        return maxSum;
        */

        //Optimized
        int sum = 0;
        int maxSum = nums[0];

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            maxSum = max(sum,maxSum);
            if(sum<0){
                sum = 0;
            } 
        }

        return maxSum;

    }
};