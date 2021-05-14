'''
    Problem: Running Sum of 1d Array
    Source: https://leetcode.com/problems/running-sum-of-1d-array/
    Code by: Edgar A. Ramírez Fuentes
'''

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        for i in range(1,len(nums)):
            nums[i] = nums[i-1] + nums[i]
        return nums