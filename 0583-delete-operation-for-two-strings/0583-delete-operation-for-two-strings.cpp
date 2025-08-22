class Solution {
public:
    int n,m;
    int dp[501][501];
    int solve(string &word1, string &word2 , int i , int j)
    {
        if(i >= n || j>= m)
        return 0;

        if(dp[i][j] != -1)
        return dp[i][j];

        if(word1[i] == word2[j])
        return dp[i][j] = 1+solve(word1 , word2 , i+1, j+1);

        return dp[i][j] = max(solve(word1 , word2, i+1, j) , solve(word1, word2, i, j+1));

    }
    int minDistance(string word1, string word2) {
        memset(dp , -1 , sizeof(dp));
        n = word1.length();
        m = word2.length();
        int len= solve(word1 , word2, 0 , 0);
        int del = n - len;
        int insertion = m - len;
        return del + insertion;
    }
};