/*
    Problem: Longest Substring Without Repeating Characters
    Source: https://leetcode.com/problems/longest-substring-without-repeating-characters/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> bucket;
        unsigned int answer = 0, l = 0, r = 0;
        if(!s.size()) return 0;
        while(r < s.size()) {
            if(bucket[s[r]]) { 
                while(bucket[s[r]]) {
                    bucket[s[l]]--;
                    ++l; 
                }      
            }
            bucket[s[r]]++;
            answer = max(answer, r - l + 1);
            ++r;
        }
        return answer;
    }
};