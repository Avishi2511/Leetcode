/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
    
        if(root==NULL) return false;

        //if(root==NULL && targetSum==0) return true;
        //if(root==NULL && targetSum != 0) return false;

        if(root->left == NULL && root->right == NULL) return (root->val == targetSum);

        bool leftPath = hasPathSum(root->left, targetSum - root->val);
        bool rightPath = hasPathSum(root->right, targetSum - root->val);

        return (leftPath || rightPath);








        /*
        // if(targetSum==0){
        //     return true;
        // }
        if(!root){
            return false;
        }

        if(!root->left && !root->right){
            return targetSum == root->val;
        }

        bool leftSum = hasPathSum(root->left, targetSum - root->val);
        bool rightSum = hasPathSum(root->right, targetSum - root->val);

        return leftSum || rightSum;
        */

    }
};