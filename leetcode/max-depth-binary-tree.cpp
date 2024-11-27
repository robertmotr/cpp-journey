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

    int dfsDepth(TreeNode* root) {
        int left = 0;
        int right = 0;

        if(root->left != nullptr) {
            left = dfsDepth(root->left);
        }
        if(root->right != nullptr) {
            right = dfsDepth(root->right);
        }

        return max(left, right) + 1;
    }

    int maxDepth(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        return dfsDepth(root);
        
    }
};
