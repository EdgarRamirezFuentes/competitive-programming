'''
    Problem: Shuffle String
    Source: https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
    Code by: Edgar A. Ramírez Fuentes
'''

class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        length = len(s)
        answer = list(s)
        for i in range(length):
            answer[indices[i]] = s[i]
        answer = ''.join(([str(elem) for elem in answer]) )
        return answer