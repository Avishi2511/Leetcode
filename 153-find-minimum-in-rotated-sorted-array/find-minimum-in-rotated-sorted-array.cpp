class Solution {
public:
    int findMin(vector<int>& nums) {
        int minm = INT_MAX;
        int low = 0, high = nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            //Is right sorted?
            minm = min(nums[mid], minm);
            if(nums[mid]<=nums[high]){
                high = mid-1;
            }
            else{
                minm = nums[low];
                low = mid+1;
            }
        }

        return minm;
    }
};