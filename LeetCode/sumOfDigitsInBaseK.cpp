/*
    Problem: Sum of Digits in Base K
    Source: https://leetcode.com/problems/sum-of-digits-in-base-k/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;
        while (n) {
            ans += n % k;
            n /= k;
        }
        return ans;
    }
};