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
    TreeNode* searchBST(TreeNode* root, int val) {
        queue<TreeNode *> q;
        q.push(root);
        vector<int> ans;

        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();

            if(node->val == val) return node;

            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
        }

        return {};
    }
};