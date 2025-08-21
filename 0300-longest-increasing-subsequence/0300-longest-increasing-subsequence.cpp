class Solution {
public:
    int dp[2501][2501];
    int solve(vector<int>& nums, int i, int p)
    {
        if(i>= nums.size())
        return 0;

        if(p != -1 && dp[i][p] != -1)
        return dp[i][p];

        int take=0;

        if(p == -1 || nums[i]>nums[p])
        {
            take = 1+ solve(nums, i+1 , i);
        }
        
        int skip = solve(nums, i+1, p);

        if(p != -1)
        dp[i][p]= max(take, skip);
        
        return max(take, skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1 , sizeof(dp));
        return solve(nums, 0, -1);
    }
};