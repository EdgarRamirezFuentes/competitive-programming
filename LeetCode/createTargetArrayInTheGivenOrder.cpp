/*
    Problem: Create Target Array in the Given Order
    Source: https://leetcode.com/problems/create-target-array-in-the-given-order/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        list<int> target;
        vector<int> ans;
        for(int i = 0; i < nums.size();i++) {
            if(index[i] == 0) {
                target.push_front(nums[i]);
                continue;
            }
            auto pos = target.begin();
            advance(pos, index[i]);
            
            if(index[i] > target.size() - 1) {
                target.push_back(nums[i]);
            }else{
                target.insert(pos, nums[i]);
            }
            
        }
        for(auto i = target.begin(); i != target.end(); i++) {
            ans.push_back(*i);
        }
        return ans;
        
    }
};