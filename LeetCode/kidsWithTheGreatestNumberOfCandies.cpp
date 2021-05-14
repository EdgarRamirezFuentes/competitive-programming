/*
    Problem: Kids With the Greatest Number of Candies
    Source: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int g = *max_element(candies.begin(),candies.end());
        cout << g<<endl;
        for(auto i : candies) {
            if(i+extraCandies >= g) {
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};