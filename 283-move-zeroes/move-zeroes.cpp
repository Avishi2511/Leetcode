class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans (nums.size());

        int nz = 0;
        int z = n-1;

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ans[z]=0;
                z--;
            }
            else{
                ans[nz] = nums[i];
                nz++;
            }
        }

        nums = ans;
    }
};