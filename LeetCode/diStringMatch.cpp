/*
    Problem: DI String Match
    Source: https://leetcode.com/problems/di-string-match/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int I = 0, D = s.size();
        vector<int> ans;
        for(auto& l : s) {
            if (l == 'I') {
                ans.push_back(I);
                I++;
            }else {
                ans.push_back(D);
                D--;
            }
        }
        if(s[s.size() -1] == 'D') {
            ans.push_back(I);
        } else {
            ans.push_back(D);
        }
        return ans;
    }
};