/*
    Problem: Subtract the Product and Sum of Digits of an Integer
    Source: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans;
        int producto = 1, suma = 0;
        while(n) {
            suma += n%10;
            producto *= n%10;
            n/= 10;
        }
        return producto - suma;
    }
};