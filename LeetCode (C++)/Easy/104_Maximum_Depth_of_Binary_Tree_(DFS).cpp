/*
Runtime: 4 ms, faster than 97.25% of C++ online submissions for Maximum Depth of Binary Tree.
Memory Usage: 18.8 MB, less than 81.58% of C++ online submissions for Maximum Depth of Binary Tree.
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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        else return max(1+maxDepth(root->left), 1+maxDepth(root->right));
    }
};