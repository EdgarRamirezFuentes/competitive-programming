/*
    Problem: Missing Number
    Source: https://leetcode.com/problems/missing-number/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(!nums.size()) return 0;
        int check[nums.size() + 2];
        memset(check, 0, sizeof(check));
        for(auto n : nums) {
            check[n] = 1;
        }
        
       for(int i = 0; i < nums.size(); i++) {
           if(!check[i]) return i;
       }
        return nums.size();
    }
};