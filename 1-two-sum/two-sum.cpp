class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
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











        /*
        vector<int> sol;
        int n= nums.size();
        bool ans=false;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    sol.push_back(i);
                    sol.push_back(j);
                    break;
                    ans=true;
                }
            }
            if (ans==true)
            break;
        }
        
        return sol;
        */


/*
        map<int,int> map;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int a = nums[i];
            int diff = target-a;
            if(map.find(diff)!=map.end()){
                return {map[diff], i};
            }
            map[a] = i; 
        }
        return {-1,1};
        */
    }
    
};