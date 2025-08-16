class Solution {
public:
    int t[1001][1001];
    int solve(string &s, string &s2, int i, int j){
        if(i==0 || j== 0)
        return t[i][j] = 0;

        if(t[i][j] != -1)
        return t[i][j];

        if(s[i-1] == s2[j-1]){
            return t[i][j]= 1+solve(s,s2,i-1,j-1);
        }
        return t[i][j]= max(solve(s,s2, i-1,j),solve(s,s2, i, j-1));
    }
    int longestPalindromeSubseq(string s) {
        memset(t , -1 , sizeof(t));
        string s2 = s;
        int n = s.length();
        reverse(begin(s2), end(s2));
        return solve(s,s2,n,n);
    }
};