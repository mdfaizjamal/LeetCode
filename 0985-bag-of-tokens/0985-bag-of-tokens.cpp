class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int maxscore = 0;
        int n = tokens.size();
        int j = n-1 , score = 0;
        sort(tokens.begin(), tokens.end());
        for(int i =0 ; i<=j ; i++)
        {
            if(power >= tokens[i])
            {
                power = power - tokens[i];
                score++;
                maxscore = max(score, maxscore);
            }
            else if(score >= 1)
            {
                
                power = power + tokens[j];
                j--;
                score--;
                i--;
                maxscore = max(score , maxscore);
                
            }
            else
            return maxscore;
        }
        return maxscore;
    }
};