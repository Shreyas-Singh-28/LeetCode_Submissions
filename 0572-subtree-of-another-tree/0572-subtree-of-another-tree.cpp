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
    bool ans=false;
    void dfs(TreeNode* root, TreeNode* subroot) {
        if(root==nullptr || ans==true) return;
        if(isSameTree(root,subroot)) {
            ans=true;
        }
        dfs(root->left, subroot);
        dfs(root->right, subroot);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        if(p->val==q->val) {
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        dfs(root, subRoot);
        return ans;
    }
};