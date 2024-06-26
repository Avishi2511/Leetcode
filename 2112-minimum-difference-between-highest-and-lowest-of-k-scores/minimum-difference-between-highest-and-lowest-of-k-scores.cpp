class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        vector<int> sol;
        int min = INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+k-1;j<nums.size();j++){
                int diff = nums[j] - nums[i];
                if(diff<min){
                    min = diff;
                }
            }
        }

        return min;
    }
};