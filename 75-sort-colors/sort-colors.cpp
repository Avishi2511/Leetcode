class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int min=nums[i];
            int k=i;
            for(int j=i+1;j<n;j++){
                if(min>nums[j]){
                    min=nums[j];
                    k=j;
                }
            }
            swap(nums[k], nums[i]);
        }
    }
};