class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        /*
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int sum=nums[i];
            for(int j=i+1;j<n;j++){
                sum+=nums[j];
                if(sum%k==0){
                    return true;
                }
            }
        }
        return false;
        */

        int n = nums.size();
        unordered_map<int, int> remainderMap;
        int cumulativeSum = 0;
        
        remainderMap[0] = -1;
        
        for (int i = 0; i < n; i++) {
            cumulativeSum += nums[i];
            
            int remainder = k == 0 ? cumulativeSum : cumulativeSum % k;
        
            if (remainderMap.count(remainder)) {
                if (i - remainderMap[remainder] > 1) {
                    return true;
                }
            } else {
                remainderMap[remainder] = i;
            }
        }
        
        return false;

        /*
        int total=0;
        vector<int> key;
        int j=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            total+=nums[i];
            if(total<k){
                key.push_back(nums[i]);
                continue;
            }
            if(total>k){
                total=total-key[j];
                j++;
            }
            if(total%k==0){
                return true;
            }
        }
        return false;
        */
    }
};