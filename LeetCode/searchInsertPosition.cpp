/*
    Problem: Search Insert Position
    Source: https://leetcode.com/problems/search-insert-position/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // Time complexity: O(n) where n is the length of my array.
        // Space complexity: O(1)
        
        int guardian = -1; // Check the index of the last smaller number than my target.
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > target) break;
            if(target == nums[i]) return i;
            guardian = i; // This is the last smaller number than my target.
        }
        // If get here, It means that the target was not found.
        // So I need to return my guardian + 1 because my target needs to be forward the last smaller number.
        return guardian + 1;
    }
};