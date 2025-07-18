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
    /*
    void inOrder(TreeNode *root, vector<int> &ans){
        
        if(root==NULL){
            return;
        }
        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);
    }
    */
    vector<int> inorderTraversal(TreeNode* root) {
        /*
        vector<int> ans;
        inOrder(root, ans);
        return ans;
        */

        stack<TreeNode*> st;
        TreeNode *node = root;
        vector<int> inorder;

        while(true){
            if(node!=NULL){
                st.push(node);
                node = node-> left;
            }
            else {
                if(st.empty()==true) break;
                node = st.top();
                st.pop();
                inorder.push_back(node->val);
                node = node->right;
            }
        } 

        return inorder;
    }


};