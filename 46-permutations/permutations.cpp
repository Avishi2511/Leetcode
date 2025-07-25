class Solution {
public:
    /*
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() == 1) return {nums};

        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); ++i) {
            int current = nums[i];

            vector<int> remaining;
            for (int j = 0; j < nums.size(); ++j) {
                if (j != i) remaining.push_back(nums[j]);
            }

            vector<vector<int>> perms = permute(remaining);

            for (auto& perm : perms) {
                perm.insert(perm.begin(), current);
                result.push_back(perm);
            }
        }

        return result;
    }
    */



    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()==1) return {nums};

        vector<vector<int>> result;

        for(int i=0;i<nums.size();i++){
            int current = nums[i];

            vector<int> rem;

            for(int j=0;j<nums.size();j++){
                if(i!=j) rem.push_back(nums[j]);
            }

            vector<vector<int>> perms = permute(rem);

            for (auto &p : perms){
                p.insert(p.begin(), current);
                result.push_back(p);
            }
            
        }

        return result;
    }



















};