// Maximum Depth of Binary Tree
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
    int c = 1;
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        return max(maxDepth(root->left)+1, maxDepth(root->right)+1);
    }
};

//         int l=0, r=0;
//         if (root->left != NULL){
//             l++;
//             l += maxDepth(root->left); 
//         }
//         if (root->right != NULL){
//             r++;
//             r += maxDepth(root->right);
//         }
        
//         return max(l, r);
