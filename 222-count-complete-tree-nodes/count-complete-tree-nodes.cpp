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
    int dfs(TreeNode* root){
        if(root==NULL) return 0;
        return dfs(root->left) + dfs(root->right) + 1;
    }
    int countNodes(TreeNode* root) {

        return dfs(root);
        // with level order traversal (low complexity)
        /* 
        if(root==NULL) return 0;
        
        queue<TreeNode *> q;
        q.push(root);
        int count = 0;

        while(!q.empty()){
            root = q.front();
            count++;
            q.pop();

            if(root->left!=NULL) q.push(root->left);
            if(root->right!=NULL) q.push(root->right);
        }

        return count;
        */
    }
};