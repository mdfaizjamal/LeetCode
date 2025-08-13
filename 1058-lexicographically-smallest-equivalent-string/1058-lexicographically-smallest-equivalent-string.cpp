class Solution {
public:

    char dfsfind(unordered_map<char, vector<char>> &adj, char curr_ch , vector<int> &visited)
    {
        visited[curr_ch - 'a'] = 1;
        char minchar = curr_ch;

        for(char &v :adj[curr_ch]){
            if(visited[v - 'a'] == 0){
                minchar= min(minchar, dfsfind(adj , v , visited));
            }
        }
        return minchar;
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        int n= s1.length();
        int m = baseStr.length();

        unordered_map<char, vector<char>> adj;

        for(int i=0; i<n; i++)
        {
            char u=s1[i];
            char v= s2[i];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        string result;

        for(int i=0;i<m;i++)
        {
            char ch=baseStr[i];
            
            vector<int> visited(26, 0);

            char minchar = dfsfind(adj , ch , visited); // for this ch none is visited as of now

            result.push_back(minchar);
        }
        return result;
    }
};