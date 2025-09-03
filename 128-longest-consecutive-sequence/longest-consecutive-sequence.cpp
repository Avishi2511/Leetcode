class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        /* Brute
        sort(nums.begin(),nums.end());

        int len = 1;
        int maxLen = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                len++;
            }
            else{
                maxLen = max(maxLen,len);
                len = 1;
            }
        }

        maxLen = max(maxLen,len);
        return maxLen;
        */

        /* My approach - TLE
        if(nums.empty()) return 0;

        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int maxLen = 0;
        int len = 1;

        for(int i=0;i<nums.size();i++){
            int next = nums[i];

            if(!mp.count(next-1)){
                len = 1;
                while(mp.count(next + 1)){
                    next++;
                    len++;
                }
                maxLen = max(maxLen, len);
            }
        }
        return maxLen;
        */

        if(nums.empty()) return 0;

        unordered_map<int,bool> mp;
        for(int x : nums) mp[x] = true;

        int maxLen = 0;

        for(auto &p : mp){
            int num = p.first;

            if(mp.find(num - 1) == mp.end()){
                int curr = num;
                int len = 1;

                while(mp.find(curr + 1) != mp.end()){
                    curr++;
                    len++;
                }
                maxLen = max(maxLen, len);
            }
        }
        return maxLen;
    }
};