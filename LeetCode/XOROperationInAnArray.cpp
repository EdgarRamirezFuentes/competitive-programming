/*
    Problem: XOR Operation in an Array
    Source: https://leetcode.com/problems/xor-operation-in-an-array/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            v.push_back(start + (2*i));
        }
        
        for(auto i: v) {
            ans ^= i;
        }
        return ans;
    }
};