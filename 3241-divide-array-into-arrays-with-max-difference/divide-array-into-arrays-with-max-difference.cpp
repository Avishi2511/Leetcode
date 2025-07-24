class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
        int n = nums.size();
        int narr = n/3;

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i=0;i<nums.size()-2;i=i+3){
            ans.push_back({nums[i], nums[i+1], nums[i+2]});
        }
        
        bool ok = false;
        for(int i=0;i<ans.size();i++){
            if(abs(ans[i][0]-ans[i][1])<=k && abs(ans[i][1]-ans[i][2])<=k 
            && abs(ans[i][0] - ans[i][2])<=k){
                ok = true;
            }
            else{
                ok = false;
                break;
            }

        }

        if(ok==false) return {};
        
        return ans;
    }
};