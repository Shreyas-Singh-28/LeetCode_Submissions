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
    int ans=0;
    void dfs(TreeNode* root, int value) {
        if(root==nullptr) return;
        if(root->val>=value) {
            ans++;
            value=root->val;
        }
        dfs(root->left, value);
        dfs(root->right, value);
    }
    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return ans;
    }
};

/*
        5
      n   3
         2 2
       4
    4
*/