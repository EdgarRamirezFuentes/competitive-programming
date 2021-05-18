/*
    Problem: Merge Strings Alternately
    Source: https://leetcode.com/problems/merge-strings-alternately/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1Letters = 0;
        int w2Letters = 0;
        string ans = "";
        int index1 = 0;
        int index2 = 0;
        
        for (int size = 0; size < word1.size() * 2; size++) {
            // Word1 letter
            if (~size & 1) {
                ans += word1[index1];
                index1++;
            } else {
                if (index2 < word2.size()) {
                    ans += word2[index2];
                    index2++;
                }
            }
            
        }
        // Word2 is bigger, then the remaining letters are appended
        if (word2.size() > word1.size()) {
            while (index2 < word2.size()) {
                ans += word2[index2];
                index2++;
            }
        }
        return ans;
    }
};