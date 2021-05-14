/*
    Problem: Remove Duplicates from Sorted Array
    Source: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return nums.size();
        } 
        unordered_map <int,int> numeros;
        vector<int> nuevo;
        for(auto i : nums){
            numeros[i]++;
            if(numeros[i] > 1){
                continue;
            }else{
                nuevo.push_back(i);
            }
        }
        nums = nuevo;
        return nums.size();
    }
};