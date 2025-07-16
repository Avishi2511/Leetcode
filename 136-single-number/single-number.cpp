class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> map;

        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        for(const auto &pair: map){
            if(pair.second!=2){
                return pair.first;
            }
        }

        return 0;
    }
};