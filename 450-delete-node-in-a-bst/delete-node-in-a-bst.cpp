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
    TreeNode* deleteNode(TreeNode* root, int key) {
        /*
        if(root==NULL) return NULL;
        TreeNode* prev = root;
        TreeNode* curr = root;

        while(curr!=NULL){
            if(curr->val > key) curr = curr->right;
            else if(curr->val < key) curr = curr->left;
            else {
                if(curr->val < prev->val) {
                    prev->left = curr->right;
                    break;
                }

                if(curr->val > prev->val){
                    prev->right = curr->right;
                    break;
                }
            }
            prev = curr;
        }

        return root;
        */

        if (root==NULL) return nullptr;

        TreeNode* parent = nullptr;
        TreeNode* curr = root;

        while (curr && curr->val != key) {
            parent = curr;
            if (key < curr->val) curr = curr->left;
            else curr = curr->right;
        }

        if (curr==NULL) return root;

        if (curr->left==NULL || curr->right==NULL) {
            TreeNode* child = curr->left ? curr->left : curr->right;
            if (parent==NULL) return child; 
            if (parent->left == curr) parent->left = child;
            else parent->right = child;
            delete curr;
        } 
        else {
            TreeNode* succParent = curr;
            TreeNode* succ = curr->right;
            while (succ->left) {
                succParent = succ;
                succ = succ->left;
            }
            curr->val = succ->val; 
            if (succParent->left == succ) succParent->left = succ->right;
            else succParent->right = succ->right;
            delete succ;
        }

        return root;

    }
};