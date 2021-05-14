'''
    Problem: Find a Corresponding Node of a Binary Tree in a Clone of That Tree
    Source: https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
    Code by: Edgar A. Ramírez Fuentes
'''

class Solution:
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        if not original: 
            return None
        if original == target: 
            return cloned
        answer = None
        if original.left and not answer: 
            answer = self.getTargetCopy(original.left,cloned.left, target)
        if original.right and not answer: 
            answer = self.getTargetCopy(original.right,cloned.right, target)
        return answer
        