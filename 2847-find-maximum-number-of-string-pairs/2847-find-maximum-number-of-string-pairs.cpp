class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int c=0;
        int n=words.size();
        string s;
        for(int i=0;i<n;i++)
        {
            s=words[i];
            reverse(s.begin(),s.end());
            for(int j=i+1;j<n;j++)
            {
                if(s==words[j])
                c++;
            }
        }
        return c;
    }
};