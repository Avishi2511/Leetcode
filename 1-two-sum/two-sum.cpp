class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }

        return ans;
        */
        vector<int> ans;

        unordered_map<int,int> map;

        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];

            if(map.count(diff)){
                ans.push_back(map[diff]);
                ans.push_back(i);
                break;
            }

            map[nums[i]] = i;
        }

        return ans;
    }
};