/*
    Problem: Final Prices With a Special Discount in a Shop
    Source: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        for(int i = 0; i < prices.size(); i++) {
            int value = prices[i];
            int discount = -1;
            for(int j = i + 1; j < prices.size(); j++) {
                if(prices[j] <= value) {
                    discount = prices[j];
                    break;
                }
            }
            ans.push_back(discount != -1 ? value - discount : value);
        }
        return ans;
    }
};