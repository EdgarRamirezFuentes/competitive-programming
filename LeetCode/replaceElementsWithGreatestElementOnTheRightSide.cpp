/*
    Problem: Replace Elements with Greatest Element on Right Side
    Source: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        size_t size = arr.size();
        int biggest = arr[size-1];
        arr[size-1] = -1;
        for(int i = size - 2; i > -1; i--) {
            int current_value = arr[i];
            arr[i] = biggest;
            if(current_value > biggest) biggest = current_value;
        }
        return arr;
    }
};