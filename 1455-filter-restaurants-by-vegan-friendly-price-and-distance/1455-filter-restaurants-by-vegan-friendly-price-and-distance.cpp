class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        
        vector<pair<int,int>> v;
        for(auto a:restaurants)
        {
            if(((veganFriendly==1&&a[2]==1)||veganFriendly==0)&&a[3]<=maxPrice&&a[4]<=maxDistance)
            {
                v.push_back({a[1],a[0]});
            }
        }
        vector<int> ans;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(auto a:v)
        {
            ans.push_back(a.second);
        }
        return ans;
    }
};