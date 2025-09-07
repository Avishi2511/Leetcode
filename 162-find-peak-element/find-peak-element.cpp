class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        /*
        int n = nums.size();
        if(n==1){
            return 0;
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
                return i;
            }
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        return n-1;
        */

        int low = 0, high = nums.size()-1;

        while(low<high){
            int mid = (low+high)/2;

            if(nums[mid] < nums[mid + 1]) {
                low = mid + 1;  // peak must be on the right
            } else {
                high = mid;     // peak is at mid or on the left
            }
        }

        return low;
    }
};