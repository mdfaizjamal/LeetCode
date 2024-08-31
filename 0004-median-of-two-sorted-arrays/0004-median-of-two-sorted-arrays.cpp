class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v=nums1;
        double d;
        for(auto a:nums2)
        {
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(v.size()%2==0)
        {
           int i=v.size()/2;
            d=(v[i-1]+v[i])/2.0;
        }
        else{
            int i=v.size()/2;
            d=v.at(i);
        }
        return d;
    }
};