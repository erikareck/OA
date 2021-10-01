/*
Runtime: 4 ms, faster than 86.57% of C++ online submissions for Symmetric Tree.
Memory Usage: 16.3 MB, less than 90.32% of C++ online submissions for Symmetric Tree.
*/
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
    bool isS(TreeNode* node_left, TreeNode* node_right){
        if (node_left == nullptr && node_right == nullptr) return true;
        if (node_left == nullptr || node_right == nullptr) return false;
        if (node_left->val != node_right->val) return false;
        if (isS(node_left->left, node_right->right) && \
            isS(node_left->right, node_right->left))
            return true;
        return false;       
    }
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return isS(root->left, root->right);
    }
};