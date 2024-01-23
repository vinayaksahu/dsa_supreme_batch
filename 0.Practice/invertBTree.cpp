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

    void swapchild(TreeNode* parent) {
        if(parent) {
            swapchild(parent->left);
            swapchild(parent->right);
            swap(parent->left, parent->right);
        }
    }

    TreeNode* invertTree(TreeNode* root) {
        swapchild(root);
        return root;
    }
};