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
    TreeNode* inorder(vector<int> &result, TreeNode* root)
    {
        if(root == NULL)
        return NULL;

        inorder(result, root->left);
        result.push_back(root->val);
        inorder(result, root->right);

        return root;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        root= inorder(result,root);
        return result;
    }
};