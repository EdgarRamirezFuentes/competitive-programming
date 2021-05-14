'''
    Problem: Richest Customer Wealth
    Source: https://leetcode.com/problems/richest-customer-wealth/
    Code by: Edgar A. Ramírez Fuentes
'''

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        wealth = 0
        for i in accounts:
            if sum(i) > wealth:
                wealth = sum(i)
        return wealth