class Solution {
public:
    int dp[1001][1001];
    int n;
    int solve(vector<vector<int>>& pairs, int prev , int curr)
    {
        if(curr == n)
        {
            return 0;
        }

        if(prev != -1 && dp[prev][curr] != -1)
        return dp[prev][curr];

        int take = 0;

        if(prev == -1 || pairs[curr][0] > pairs[prev][1])
        {
            take = 1 + solve(pairs , curr , curr+1);
        }
        int skip = solve(pairs, prev , curr+1);

        if(prev != -1)
        dp[prev][curr] = max(take , skip);

        return max(take , skip);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        memset(dp, -1, sizeof(dp));
        n = pairs.size();
        sort(begin(pairs), end(pairs));
        return solve(pairs, -1, 0);
    }
};