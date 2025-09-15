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
    void leafNodes(TreeNode *root, vector<int> &r){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            r.push_back(root->val);
        }
        leafNodes(root->left, r);
        leafNodes(root->right, r);

        /*
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();

            if(node->left==NULL && node->right==NULL) {
                r.push_back(node->val);
            }
        
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
        }

        return r; 
        */     
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1, r2;
        leafNodes(root1, r1);
        leafNodes(root2, r2);

        /*
        for(int i=0;i<r1.size();i++){
            if(r1[i]!=r2[i]) return false;
        }

        return true;
        */

        return r1==r2;
    }
};