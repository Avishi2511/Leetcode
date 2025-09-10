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
    int minDepth(TreeNode* root) {
        /*
        if(root==NULL) return INT_MAX;

        if(root->left==NULL && root->right==NULL) return 1;

        int ldepth = minDepth(root->left);
        int rdepth = minDepth(root->right);

        return 1+min(ldepth,rdepth);
        */

        if(root == NULL)
        return 0;  // NULL node depth is 0

    if(root->left == NULL && root->right == NULL)
        return 1;  // leaf node depth is 1

    if(root->left == NULL)
        return 1 + minDepth(root->right);  // only right path exists

    if(root->right == NULL)
        return 1 + minDepth(root->left);   // only left path exists

    return 1 + min(minDepth(root->left), minDepth(root->right));  // both paths exist
    }
};