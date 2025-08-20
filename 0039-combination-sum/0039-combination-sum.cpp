class Solution {
public:
    vector<vector<int>> ans;
    void help(int i,vector<int>& c,int t, vector<int>& sol)
    {
        if(t==0)
        {
            ans.push_back(sol);
            return ;
        }
        if(t<0)
        {
            return ;
        }
        if(i==c.size())
        return ;

        // skip the ith element
        help(i+1,c,t,sol);
        // pick the ith element
        sol.push_back(c[i]);
        help(i,c,t-c[i],sol);
        //backtracking
        sol.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>sol;
        help(0,candidates,target,sol);
        return ans;
    }
};