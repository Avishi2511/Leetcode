class Solution {
public:
/*
    vector<vector<int>> recursion(int i, vector<int> &nums, vector<int> &left, vector<vector<int>> &ans){
        if(n==1){
            return ans;
        }

        left = nums.erase(nums.begin()+i);
        recursion(i+1, nums, left, ans);

    }
    */


    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() == 1) return {nums};

        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); ++i) {
            // Pick the element at index i
            int current = nums[i];

            // Create a new array excluding the picked element
            vector<int> remaining;
            for (int j = 0; j < nums.size(); ++j) {
                if (j != i) remaining.push_back(nums[j]);
            }

            // Get all permutations of the remaining elements
            vector<vector<int>> perms = permute(remaining);

            // Insert the picked element at the front of each permutation
            for (auto& perm : perms) {
                perm.insert(perm.begin(), current);
                result.push_back(perm);
            }
        }

        return result;
    }
};