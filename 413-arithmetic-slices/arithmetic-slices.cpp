class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0;

        for(int i=0;i<nums.size()-1;i++){
            int diff1 = nums[i+1]-nums[i];
            for(int j=i+2;j<nums.size();j++){
                int diff = nums[j] - nums[j-1];
                if(diff==diff1) {
                    ans++;
                    diff1 = diff;
                }
                else {
                    break;
                }
            }
        }

        return ans;
    }
};