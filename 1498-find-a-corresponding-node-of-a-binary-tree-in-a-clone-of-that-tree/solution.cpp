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
    TreeNode *t;
    void dfs(TreeNode *root,TreeNode* target) {
        if(target->val==root->val) t=root;
        if(root->left) dfs(root->left,target);
        if(root->right) dfs(root->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        dfs(cloned,target);
        return t;
    }
};
