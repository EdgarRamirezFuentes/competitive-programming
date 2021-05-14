/*
    Problem: Rotate Array
    Source: https://leetcode.com/problems/rotate-array/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> tmp;
        int i = 0;
        while(k--) {
            if(i == 0) {
                i = nums.size() - 1;
                continue;
            }
            i--;
        }
        
        for(int j = 0; j < nums.size(); j++) {
            tmp.push_back(nums[i]);
            if(i == nums.size() - 1) {
                i = 0;
                continue;
            }
            i++;
        }
        nums = tmp;
    }
};