class Solution {
public:
    // int dp[101];
    /*int solve(vector<int>& nums, int i)
    {
        if(i>=nums.size())
        return 0;

        if(dp[i] != -1)
        return dp[i];

        int steal = nums[i] + solve(nums, i+2);
        int skip =  solve(nums, i+1);

        return dp[i] = max(steal, skip);
    }*/
    int rob(vector<int>& nums) {
        // memset(dp, -1, sizeof(dp));
       // return solve(nums, 0);
       int n = nums.size();
        vector<int> dp (n+1 , 0);
        dp[0] = 0;
        dp[1] = nums[0];
       for(int i=2; i<=n ; i++){
        dp[i] = max(dp[i-1], dp[i-2]+nums[i-1]);
       }
       return dp[n];
    }
};