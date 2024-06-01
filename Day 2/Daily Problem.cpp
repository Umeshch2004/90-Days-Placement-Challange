//Link: https://leetcode.com/problems/score-of-a-string/?envType=daily-question&envId=2024-06-01

class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.length()-1;i++)
        {
            score += abs(s[i]-s[i+1]);
        }
        return score;
    }
};