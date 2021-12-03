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
        if (root == NULL) return 0;
        queue<TreeNode*> q;
        int s;
        int d=0;
        TreeNode* ptr;
        q.push(root);
        while(!q.empty()){
            d++;
            s = q.size();
            while(s--){
                ptr = q.front();
                q.pop();
                if (ptr->left != NULL) q.push(ptr->left);
                if (ptr->right != NULL) q.push(ptr->right);
            }
        }
        return d;
    }
};
