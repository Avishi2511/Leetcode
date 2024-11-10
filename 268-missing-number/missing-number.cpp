class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        if(nums.size()==1){
            if(nums[0]==0){
                return 1;
            }
            return 0;
        }
        sort(nums.begin(), nums.end());

        for(int i=1;i<nums.size();i++){
            if(nums[0]!=0) return 0;
            if(nums[i]!=nums[i-1]+1){
                return nums[i]-1;
            }
        }   
        
        return nums[nums.size()-1]+1;
        



    }
};