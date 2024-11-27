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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> left = {};
        vector<int> right = {};

        if(root == nullptr) {
            return {};
        }

        if(root->left != nullptr) {
            left = inorderTraversal(root->left);
        }
        if(root->right != nullptr) {
            right = inorderTraversal(root->right);
        }
        left.push_back(root->val);
        left.insert(left.end(), right.cbegin(), right.cend());
        return left;
    }
};
