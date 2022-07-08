from itertools import permutations
class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        l=set()
        for i in permutations(nums):
            l.add(i)
        l=list(l)
        return l
        