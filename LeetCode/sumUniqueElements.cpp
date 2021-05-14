/*
    Problem: Sum of Unique Elements
    Source: https://leetcode.com/problems/sum-of-unique-elements/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> bucket(100);
        int ans = 0;
        for(auto& i : nums) {
            if(bucket[i-1] == 0) {
                bucket[i-1]++;
                ans += i; 
            } else if(bucket[i-1] == 1) {
                ans -= i;
                bucket[i-1]++;
            }
        }
        return ans;
    }
};