class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums.size()==1 && nums[i]==target)
            return 0;

            if(nums[i]== target)
            return i;

            else if(nums[i]>target)
            return i;
        }
        return nums.size();
    }
};