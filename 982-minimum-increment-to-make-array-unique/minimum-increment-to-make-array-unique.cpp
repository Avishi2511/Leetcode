class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        /*
        unordered_map<int,int> map;

        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        int sum=0;
        for(const auto &pair : map){
            if(pair.second>1){
                for(int i=1;i<pair.second;i++){
                    // pair.first++;
                    sum=sum+i;
                }
            }
        }

        return sum;
        */


        sort(nums.begin(),nums.end());

        int sum=0;
        for(int i=1;i<nums.size();i++){
            int old=0;
            if(nums[i-1]==nums[i]){
                nums[i]++;
                sum++;
            }
            else if(nums[i-1]>nums[i]){
                old=nums[i];
                nums[i]=nums[i-1]+1;
                sum+=(nums[i]-old);
            }
        }
        return sum;
    }
};