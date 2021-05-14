/*
    Problem: Max Consecutive Ones
    Source: https://leetcode.com/problems/max-consecutive-ones/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int g = 0;
        for(auto i : nums) {
            if(i == 1) {
                g++;
            }else{
                g=0;
            }
            ans = max(ans,g);
        }
        return ans;
    }
};