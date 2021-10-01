/*
Runtime: 236 ms, faster than 79.60% of C++ online submissions for Minimum Depth of Binary Tree.
Memory Usage: 144.7 MB, less than 68.27% of C++ online submissions for Minimum Depth of Binary Tree.
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
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int left_sum = minDepth(root->left);
        int right_sum= minDepth(root->right);
        if (min(left_sum, right_sum)!=0) return 1+min(left_sum, right_sum); 
        return 1+max(left_sum, right_sum);
    }
};
/*Others DFS Solustion*/
class Solution {
    public int minDepth(TreeNode root) {
        if(root==null)
            return 0;
        if(root.left==null&&root.right==null)
            return 1;
        int minD=Integer.MAX_VALUE; //學習重點
        if(root.left!=null) 
            minD=Math.min(minDepth(root.left),minD); //解決子樹圍null問題
        if(root.right!=null)
           minD= Math.min(minD,minDepth(root.right));
        return 1+minD;
    }
}

/*BFS
Runtime: 216 ms, faster than 96.18% of C++ online submissions for Minimum Depth of Binary Tree.
Memory Usage: 144.6 MB, less than 78.52% of C++ online submissions for Minimum Depth of Binary Tree.
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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        
        queue<TreeNode*> q; 
        q.push(root);        
        int level = 0; 
        int n;
        
        while(!q.empty()){
            
            level++; 
            n = q.size(); 
            TreeNode* temp; 
            
            for(int i=0; i<n; i++){
                temp = q.front(); //get oldest element
                q.pop(); //remove element
                
                if(temp->left==NULL && temp->right==NULL){
                    return level; 
                }                
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
        }
        return level;
    }
};