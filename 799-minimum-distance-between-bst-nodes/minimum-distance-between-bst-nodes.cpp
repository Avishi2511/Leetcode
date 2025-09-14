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
    int minDiffInBST(TreeNode* root) {
        
        queue<TreeNode *> q;
        q.push(root);
        vector<int> bfs;
        bfs.push_back(root->val);

        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();

            if(node->left!=NULL) {
                q.push(node->left);
                bfs.push_back(node->left->val);
            }

            if(node->right!=NULL) {
                q.push(node->right);
                bfs.push_back(node->right->val);
            }
        }

        int minm = INT_MAX;
        for(int i=0;i<bfs.size()-1;i++){
            for(int j=i+1;j<bfs.size();j++){
                minm = min(minm, abs(bfs[i]-bfs[j]));
            }
        }

        return minm;
    }
};