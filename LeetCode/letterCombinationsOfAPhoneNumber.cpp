/*
    Problem: Letter Combinations of a Phone Number
    Source: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public: 
    
    void solve(string &digits, map<char, string> &mp,  string &curr, vector<string> &ans, int idx) {
        if(idx == digits.size()) {
            ans.push_back(curr);
            return;   
        }
        
        for(auto &i : mp[digits[idx]]) {
            curr += i;
            solve(digits, mp, curr, ans, idx + 1);
            curr.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string curr = "";
        map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        if(digits.size() > 0) solve(digits, mp, curr, ans, 0);
        return ans;
    }
};