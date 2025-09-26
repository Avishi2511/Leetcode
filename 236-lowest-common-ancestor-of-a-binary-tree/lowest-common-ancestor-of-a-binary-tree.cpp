/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    /*
    vector<TreeNode*> findAncestor(TreeNode *node, TreeNode *subNode, vector<TreeNode* > &arr){
        if(node==NULL) return {};

        arr.push_back(node);

        if(node==subNode) return arr;

        vector<TreeNode*> left = findAncestor(node->left, subNode, arr);
        if(!left.empty()) return left;
        vector<TreeNode*> right = findAncestor(node->right, subNode, arr);
        if(!right.empty()) return right;

        arr.pop_back();
        return {};
    }
    */

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){

        //level order not needed
        /*
        queue <TreeNode*> que;
        que.push(root);
        vector<TreeNode* > pancestor, qancestor;

        while(!que.empty()){
            TreeNode *node = que.front();
            que.pop(); 

            if(node==p) findAncestor(root, p, pancestor);
            if(node==q) findAncestor(root, q, qancestor);

            if(node->left!=NULL) que.push(node->left);
            if(node->right!=NULL) que.push(node->right);
        }

        TreeNode* lca = nullptr;
        for(int i = 0; i<min(pancestor.size(), qancestor.size()); i++){
            if(pancestor[i] == qancestor[i]) lca = pancestor[i]; 
            else break; 
        }

        return lca;
        */


        //Use only dfs

        if (root == NULL || root == p || root == q) 
        return root;

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if (left && right) return root;
        return left ? left : right;
    }
};