class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        /*
        int minLen = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum = 0; int len = 0;
            for(int j=i;j<nums.size();j++){
                sum += nums[j];
                len++;
                if (sum >= target) {
                    minLen = min(minLen, len);
                    break;
                }
            }
        }

        if(minLen == INT_MAX) return 0;
        return minLen;
        */

        int sum = 0, len = 0;
        int minLen = INT_MAX;
        int l = 0, r = 0;

        while(r<nums.size()){
            sum += nums[r];

            while (sum >= target) {            
                minLen = min(minLen, r - l + 1); 
                sum -= nums[l];
                l++;
            }
            
            r++;
        }

        if(minLen == INT_MAX) return 0;
        return minLen;
        
    }
};