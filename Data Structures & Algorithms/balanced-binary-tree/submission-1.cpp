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
    pair<bool, int> recursive(TreeNode* root) {
        if (root == nullptr) return {true, 0};
        bool balanced;
        pair<bool, int> left = recursive(root->left);
        pair<bool, int> right = recursive(root->right);
        
        if (abs(left.second - right.second) <= 1 && left.first && right.first) {
            balanced = true;
        } else balanced = false;
        
        int height = max(left.second, right.second) + 1;

        return {balanced, height};
    }
    
    bool isBalanced(TreeNode* root) {
        return recursive(root).first; 

    }
};
