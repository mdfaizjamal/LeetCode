class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size()/2, cnt=1, temp;
        for(int i=0;i<nums.size();i++)
        {
            temp = nums[i];
            for(int j= i+1; j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    cnt++;
                }
            }
            if(cnt>n)
            {
                return temp;
                break;
            }
            cnt=1;
        }
        return temp;
    }
};