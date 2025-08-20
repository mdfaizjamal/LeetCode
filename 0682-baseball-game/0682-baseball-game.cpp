class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>res;
        int n=operations.size();
        for(int i=0;i<n;i++)
        {
            int sz=res.size();
            if(operations[i]=="+")
            {
                res.emplace_back(res[sz-1]+res[sz-2]);
            }
            else if(operations[i]=="D")
            {
                res.emplace_back(2*res[sz-1]);
            }
            else if(operations[i]=="C")
            {
                res.pop_back();
            }
            else
            {
                res.emplace_back(stoi(operations[i]));
            }
        }
       long long ans= accumulate(res.begin(),res.end(),0); 
       return ans;
    }
};