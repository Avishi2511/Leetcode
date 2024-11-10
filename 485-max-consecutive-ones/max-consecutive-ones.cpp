class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxm=0, ones=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ones++;
                maxm = max(ones,maxm);
            }
            else ones=0;
        }
        return maxm;
    }
};