/*
    Problem: Number of Steps to Reduce a Number to Zero
    Source: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int numberOfSteps (int num) {
        int ans = 0; 
        while(num) {
            if(num%2==0) {
                num/=2;
                ans++;
            }else{
                while(num%2!=0){
                    num--;
                    ans++;
                }
            }
        }
        return ans;
    }
};