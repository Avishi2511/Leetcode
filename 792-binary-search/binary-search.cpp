class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Brute
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return i;
        }

        return -1;


        //Binary Search
        /*
        int n = nums.size();
        int low = 0, high = n-1;

        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]==target){
                return mid;
            }
            
            if(target < nums[mid]) high = mid-1;
            else low = mid+1; 
        }

        return -1;
        */
    }
};