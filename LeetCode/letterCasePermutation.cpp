/*
    Problem: Letter Case Permutation
    Source: https://leetcode.com/problems/letter-case-permutation/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    void solve(string& s, vector<string>& ans, int index) {
        if (index >= s.size()) {
            ans.push_back(s); 
            return;   
        }
        
        if( isalpha(s[index]) ) {
            // Current letter is now lowercase
            s[index] |= ' ';
            solve(s, ans, index + 1);
            // Current letter is now lowercase
            s[index] &= '_';
            solve(s, ans, index + 1);
        }  else {
            // Cannot be converted into upper o lower
            solve(s, ans, index + 1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(s, ans, 0);
        return ans;
    }
};