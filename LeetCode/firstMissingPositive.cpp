/*
    Problem: First Missing Positive
    Source: https://leetcode.com/problems/first-missing-positive/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(!nums.size()) return 1;
        unordered_map<long long int, int> a;
        long long int max_number = 0;
        for(auto num : nums) {
            a[num] = 1;
            max_number = max_number > num ? max_number : num;
        }
        for(auto i = 1; i < max_number; i++) {
            if(!a[i]) return i;
        }
        return max_number + 1;
    }
};