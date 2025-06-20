class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /*
        int maxm=0, ones=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ones++;
                maxm = max(ones,maxm);
            }
            else ones=0;
        }
        return maxm;
        */

        //Brute
        int count = 0;
        int maxCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(count>maxCount){
                    maxCount = count;
                }
            }
            else {
                count=0;
            }
        }

        return maxCount;
    }
};