class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        vector<int> sol;
        int min = INT_MAX;
        for(int i=0;i<nums.size()-k+1;i++){
            int diff = nums[i+k-1] - nums[i];
            if(diff<min){
                min = diff;
            }
        }

        return min;
    }
};