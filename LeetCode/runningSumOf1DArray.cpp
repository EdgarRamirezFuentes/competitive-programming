/*
    Problem: Running Sum of 1d Array
    Source: https://leetcode.com/problems/running-sum-of-1d-array/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i-1] + nums[i];
        }
        return nums;
    }
};