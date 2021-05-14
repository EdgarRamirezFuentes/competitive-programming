/*
    Problem: Jewels and Stones
    Source: https://leetcode.com/problems/jewels-and-stones/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> s;
        int ans = 0;
        for(auto i : S) {
            s[i]++;
        }
        for(auto i : J) {
            ans += s[i];
        }
        return ans;
    }
};