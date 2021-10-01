/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Invert Binary Tree.
Memory Usage: 9.2 MB, less than 56.10% of C++ online submissions for Invert Binary Tree.
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
 //Interative Solution (My Sol.)
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return root;
        queue<TreeNode*> q;
        TreeNode *current, *tmp;
        unsigned level;
        q.push(root);
        while (!q.empty()){
            level = q.size();
            for(unsigned i=0; i<level; i++){
                current=q.front();
                q.pop();
                if (current == NULL) continue;
                //cout << current->val << endl;
                //SWAP NODE TREE
                tmp = current->left;
                current->left = current->right;
                current->right= tmp;
                
                q.push(current->left);
                q.push(current->right);                
            }
        }
        
        return root;
    }
};

//Recurvice Solution (Official Sol.)

public TreeNode invertTree(TreeNode root) {
    if (root == null) {
        return null;
    }
    TreeNode right = invertTree(root.right);
    TreeNode left = invertTree(root.left);
    root.left = right;
    root.right = left;
    return root;
}