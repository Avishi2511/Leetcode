class Solution {
public:
    void combination(vector<int> &candidates, int i, int target, vector<vector<int>> &ans, vector<int> &comb){
        if(i==candidates.size()){
            if(target == 0){
                ans.push_back(comb);
            }
            return;
        }
        if(candidates[i]<=target){
            comb.push_back(candidates[i]);
            combination(candidates, i, target-candidates[i], ans, comb);
            comb.pop_back();   
        }
        combination(candidates, i+1, target, ans, comb);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        combination(candidates, 0, target, ans, comb);
        return ans;
    }
};