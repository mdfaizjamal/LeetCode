class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       /*int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    return {i,j};
                }
            }
        }
        return {-1,-1};*/ 

        /*unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int x=nums[i];
            int y=target-x;
            if(m.find(y)!=m.end())
            return {i,m[y]};
            m[nums[i]]=i;
        }
        return {-1,-1};*/
        int n=nums.size();
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++)
        {
            p.push_back({nums[i],i});
        }
        sort(p.begin(),p.end());
        int s=0,e=n-1;
        while(s<e)
        {
            int sum=p[s].first+p[e].first;
            if(sum==target)
            return {p[s].second,p[e].second};
            else if(sum>target)
            e--;
            else
            s++;
        }
        return {-1,-1};
    }
};