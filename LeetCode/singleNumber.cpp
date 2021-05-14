/*
    Problem: Single Number
    Source: https://leetcode.com/problems/single-number/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0;
        for(auto x : nums) {
            n ^= x;
        }
        return n;
    }  
};