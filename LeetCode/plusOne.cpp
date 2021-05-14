/*
    Problem: Plus One
    Source: https://leetcode.com/problems/plus-one/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i > -1; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i]+=1;
                return digits;
            }
        }
        digits[0]= 1;
        digits.push_back(0);
        return digits;
    }
};