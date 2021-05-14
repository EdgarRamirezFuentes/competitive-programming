/*
    Problem: N-Repeated Element in Size 2N Array
    Source: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int n = A.size() / 2;
        int ans = 0;
        unordered_map<int, int> ap;
        for(auto& i : A) {
            ap[i]++;
            if(ap[i] == n){
                ans = i;
                break;
            }
        }
        return ans; 
    }
};