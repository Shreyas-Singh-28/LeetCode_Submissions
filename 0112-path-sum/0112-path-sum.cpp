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
    int curr=0;
    bool ans=false;
    void dfs(TreeNode* root, int tar) {
        if(root==nullptr) return;
        curr+=root->val;
        if(root->left==nullptr && root->right==nullptr && curr==tar) {
            ans=true;
        }
        dfs(root->left, tar);
        dfs(root->right, tar);
        curr-=root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return ans;
    }
};