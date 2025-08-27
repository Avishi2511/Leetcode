class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //unordered_map<int,int> mp;
        sort(nums.begin(), nums.end()); 
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) return true;
        }
        /*
        unordered_set<int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])) return true;
            mp.insert(nums[i]);
        }
        */
        /*
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1) return true;
        }
        */

        /*
        for(const auto &p : mp){
            if(p.second>1) return true;
        }
        */
        return false;
    }
};