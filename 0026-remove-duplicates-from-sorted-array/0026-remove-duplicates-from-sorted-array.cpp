class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v;
        bool flag= true;
        v.push_back(nums[0]);
        for(int i=1; i<nums.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[j]==nums[i]){
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            v.push_back(nums[i]);
            flag=true;
        }
        nums=v;
        return v.size();
    }
};