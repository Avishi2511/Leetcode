class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int min=nums[i];
            int k=i;
            for(int j=i+1;j<n;j++){
                if(min>nums[j]){
                    min=nums[j];
                    k=j;
                }
            }
            swap(nums[k], nums[i]);
        }
        */

        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(int i=0;i<mp[0];i++) nums[i] = 0;

        for(int i=mp[0];i<mp[0]+mp[1];i++) nums[i] = 1;

        for(int i=mp[0]+mp[1];i<mp[0]+mp[1]+mp[2];i++) nums[i] = 2;
    }
};