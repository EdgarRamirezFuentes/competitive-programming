/*
    Problem: Decompress Run-Length Encoded List
    Source: https://leetcode.com/problems/decompress-run-length-encoded-list/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v2;
        if(nums.size() % 2 != 0){
            return v2;
        }
        for(int i = 0; i < nums.size(); i+=2){
            int j = nums[i];
            while(j--){
                v2.push_back(nums[i+1]);
            }
        }
        return v2;
    }
};