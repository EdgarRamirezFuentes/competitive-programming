/*
    Problem: Find Numbers with Even Number of Digits
    Source: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int answer = 0;
        for(auto& num : nums) {
            int digits = 0;
            while(num) {
                num /= 10;
                digits++;
            }
            if(~digits & 1) answer++;
        }
        return answer;
    }
};