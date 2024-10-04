class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        vector<int>ans;
        for(int i=0;i<asteroids.size();i++)
        {
            if(asteroids[i]>0)
            s.push(asteroids[i]);
            else{
                while(!s.empty() && s.top()>0 && abs(asteroids[i])>s.top())
                s.pop();
                if(!s.empty() && abs(asteroids[i])==s.top())
                s.pop();
                else if(s.empty() || s.top()<0)
                s.push(asteroids[i]);
            }
        }
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};