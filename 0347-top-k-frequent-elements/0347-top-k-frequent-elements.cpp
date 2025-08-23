class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i =0; i< nums.size(); i++){
            freq[nums[i]]++;
        }

        vector<pair<int, int>> items;

        for(auto &p : freq){
            items.push_back(p);
        }

        sort(items.begin(), items.end(), [](const pair<int,int>&a, const pair<int, int> &b){
            return a.second > b.second;
        });

        vector<int> result;

        for(int i =0 ; i< k && i < items.size(); i++)
        {
            result.push_back(items[i].first);
        }

        return result;
    }
};