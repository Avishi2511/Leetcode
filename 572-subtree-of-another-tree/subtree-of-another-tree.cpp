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
    bool checkSameTree(TreeNode *node, TreeNode *subRoot){
        if(node == NULL && subRoot == NULL) return true;
        if(node == NULL || subRoot == NULL) return false;
        if(node->val != subRoot->val) return false;

        return checkSameTree(node->left, subRoot->left) && checkSameTree(node->right, subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();

            //do not use the condition if(node==subRoot), the condition will never satisfy
            if(checkSameTree(node,subRoot)) return true;

            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);

        }

        return false;
    }
};