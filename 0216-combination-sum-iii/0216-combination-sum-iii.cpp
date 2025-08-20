class Solution {
public:
    void help(int i, vector<int>& sol,int t, int k,vector<vector<int>>& ans)
    {
        if(t==0&&k==0)
        {
            ans.push_back(sol);
            return ;
        }
        if(t<0||k<0)
        return ;
        if(i==10)
        return ;

        help(i+1,sol,t,k,ans);
        sol.push_back(i);
        help(i+1,sol,t-i,k-1,ans);
        sol.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> sol;
        help(1,sol,n,k,ans);
        return ans;
    }
};