class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        /*
        int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum%k==0){
                    count++;
                }
            }
        }
        return count;
        */

        unordered_map<int, int> map;
        map[0] = 1;
        int prefix_sum = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefix_sum += nums[i];
            int remainder = prefix_sum % k;
            if (remainder < 0) {
                remainder += k;
            }
            if (map.find(remainder) != map.end()) {
                count += map[remainder];
                map[remainder]++;
            } else {
                map[remainder] = 1;
            }
        }
        return count;
    }
};