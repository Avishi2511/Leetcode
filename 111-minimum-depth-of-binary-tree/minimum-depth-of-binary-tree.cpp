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

        if(root == NULL) return 0; 

        if(root->left == NULL && root->right == NULL) return 1;  

        int ldepth,rdepth;
        if((root->left)) ldepth = minDepth(root->left);
        else ldepth = INT_MAX;
        if(root->right) rdepth = minDepth(root->right);
        else rdepth = INT_MAX;

        return 1 + min(ldepth, rdepth); 
    }
};