// Binary Tree Level Order Traversal
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        vector<int> value;
        int s;
        queue<TreeNode*> q;
        TreeNode* r;
        if (root == NULL) return v;
        q.push(root);
        value.push_back(root->val);
        v.push_back(value);
        value.clear();
        while(!q.empty()){
            s = q.size();
            while(s--){
                r = q.front();
                q.pop();
                if(r->left != NULL || r->right != NULL){
                    if(r->left != NULL){
                        q.push(r->left);
                        value.push_back(r->left->val);
                        cout << r->left->val;
                    }
                    if(r->right != NULL){
                        q.push(r->right);
                        value.push_back(r->right->val);
                        cout << r->right->val;
                    }
                }
            }
            if(value.size() != 0) v.push_back(value);
            value.clear();
        }
        return v;
    }
};
