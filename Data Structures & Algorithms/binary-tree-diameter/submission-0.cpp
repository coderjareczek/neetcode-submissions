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
    int res = 0;
public:
    int recursion(TreeNode* root) {
        // returns diameter
        if (root == nullptr) return 0;
        int left = recursion(root->left);
        int right = recursion(root->right);
        res = max(res, left + right);

        return max(left, right) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        recursion(root);
        
        return res;
    }
};
