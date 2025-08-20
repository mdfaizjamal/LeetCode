class Solution {
public:
    void help(vector<int>& nums, int i, vector<int>& sol, vector<vector<int>>& ans,bool pre)
    {
        if(i==nums.size())
        {
            ans.push_back(sol);
        }
        else{
            help(nums,i+1,sol,ans,false);
            if(i>0&&nums[i]==nums[i-1]&&(!pre))
            return ;

            sol.push_back(nums[i]);
            help(nums,i+1,sol,ans,true);

            sol.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>sol;
        vector<vector<int>>ans;
        help(nums,0,sol,ans,false);
        return ans;
    }
};
