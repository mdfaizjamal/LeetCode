class Solution {
public:
    int minSetSize(vector<int>& arr) {

        unordered_map<long,long>mpp;
        
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        
        int count=1;
        vector<int> v;
        
        for(auto x:mpp){
            v.push_back(x.second);
        }
        
        sort(v.begin(),v.end());
        
        if(v.size()==1){
            return count;
        }
        
        int n=arr.size();
        int sum=0;
        
        for(int i=v.size()-1;i>=0;i--){
            sum=sum+v[i];
            if(sum>=n/2){
                return count ;
            }
            else{
                count++;
            }
        }
        
        return count;
    }
};