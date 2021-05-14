/*
    Problem: Climbing Stairs
    Source: https://leetcode.com/problems/climbing-stairs/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int climbStairs(int n) {
        vector<int> v(46, -1);
        vector<int> steps = {1, 2};
        return solve(n, v, steps);
    }
    
    int solve(int n, vector<int>& v, vector<int>& steps) {
        int path = 0;
        
        if (v[n] != -1) {
            return v[n];
        }
        
        if (n == 0) {
            return v[n] = 1;
        } 
        
        for (auto step : steps) {
            if (n - step >= 0) {
                path += solve(n - step, v, steps);
            }
        }
        return v[n] = path;;
    }
};