/*
    Problem: Two Sum
    Source: https://leetcode.com/problems/two-sum/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Store the numbers in the vector and its index 
        unordered_map<int,int> bucket;
        int remainder = 0;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++) {
            remainder = target - nums[i];
            if (bucket.find(remainder) != bucket.end()) {
                ans.push_back(bucket[remainder]);
                ans.push_back(i);
                break;
            }
            bucket[nums[i]] = i;
        }
        return ans;
    }
};