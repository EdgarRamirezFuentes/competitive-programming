/*
    Problem: Sort Array By Parity
    Source: https://leetcode.com/problems/sort-array-by-parity/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        
        for (auto& i : nums) {
            if (~i & 1) { ans.push_back(i); }
        }
        
        for (auto& i : nums) {
            if (!(~i & 1)) { ans.push_back(i); }
        }
        
        return ans;
    }
};