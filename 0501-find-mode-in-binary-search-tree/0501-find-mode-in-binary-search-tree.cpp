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
   // unordered_map<int,int> mp;
   int currno = 0;
   int currfreq = 0;
   int maxfreq = 0;
   vector<int> result;
    void dfs(TreeNode* root)
    {
        if(!root)
        {
            return;
        }

        dfs(root->left);
        //mp[root->val]++;
        
        if(root->val == currno)
        currfreq++;
        else
        {
            currno = root->val;
            currfreq=1;
        }
        if(currfreq>maxfreq)
        {
            result={};
            maxfreq=currfreq;
        }

        if(currfreq == maxfreq)
        result.push_back(root->val);

        dfs(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        /*vector<int>result;
        int maxfreq=0;

        for(auto &it : mp)
        {
            if(it.second>maxfreq)
            {
                maxfreq=it.second;
                result={};
                result.push_back(it.first);
            }
            else if(it.second==maxfreq)
            {
                result.push_back(it.first);
            }
        }*/
        return result;
    }
};