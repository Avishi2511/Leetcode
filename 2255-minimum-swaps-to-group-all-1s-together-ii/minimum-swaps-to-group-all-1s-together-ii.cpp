class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int window = 0;

        for(int i=0;i<nums.size();i++){
            if (nums[i] == 1){
                window++;
            }
        }
        
        int zero = 0;

        for(int i=0;i<window;i++){
            if(nums[i]==0){
                zero++;
            }
        }

        int swap = zero;

        int n = nums.size();
        for(int i=window;i<n+window;i++){
            if(nums[i%n] == 0){
                zero++;
            }
            if(nums[i-window] == 0){
                zero--;
            }
            swap = min(swap,zero);
        }
        return swap;
    }
};