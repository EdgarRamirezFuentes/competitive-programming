'''
    Problem: TCount Negative Numbers in a Sorted Matrix
    Source: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
    Code by: Edgar A. Ramírez Fuentes
'''

class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        negativeNumbers = 0
        for i in grid:
            for j in i:
                if j < 0:
                    negativeNumbers += 1
        return negativeNumbers