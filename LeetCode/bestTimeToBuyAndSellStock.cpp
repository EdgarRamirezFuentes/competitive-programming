/*
    Problem: Best Time to Buy and Sell Stock
    Source: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
    Code by: Edgar A. Ramírez Fuentes
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 0;
        int currentMaxProfit = 0;
        
        if(prices.size() == 0){
            return 0;
        }else{
            minPrice = prices[0];
            for(int i = 0; i < prices.size(); i++){
                if(minPrice > prices[i]){
                    minPrice = prices[i];
                }
                if((prices[i] - minPrice) > currentMaxProfit){
                    currentMaxProfit = (prices[i] - minPrice);
                }
            }
        }
        return currentMaxProfit;
    }
};