/*
    Problem: Richest Customer Wealth
    Source: https://leetcode.com/problems/richest-customer-wealth/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0, aux = 0;
        for(vector<int> account : accounts) {
            aux = 0;
            for(int currentWealth : account) {
                aux += currentWealth;
            }
            if(aux > wealth) wealth = aux;
        }
        return wealth;
    }
};