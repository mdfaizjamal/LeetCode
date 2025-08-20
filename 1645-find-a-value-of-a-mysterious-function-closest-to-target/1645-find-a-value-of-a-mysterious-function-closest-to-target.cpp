class Solution {
public:
    int closestToTarget(vector<int>& arr, int target) {
        set<int> s1;
        int n=arr.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            set<int> s2;
            s2.insert(arr[i]);
            for(auto a:s1)
            {
                s2.insert(arr[i]&a);
            }
            for(auto a:s2)
            {
                ans=min(ans,abs(a-target));
            }
            s1=s2;
        }
        return ans;
    }
};