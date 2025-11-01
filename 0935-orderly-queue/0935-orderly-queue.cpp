class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n= s.length();
        string result = s;
        if(k == 1)
        {
            for(int i=1; i<=n-1; i++)
            {
                string temp = s.substr(i) + s.substr(0,i);
                result = min(result,temp);
            }
            return result;
        }
        else
        {
            sort(s.begin(),s.end());
        }
        return s;
    }
};