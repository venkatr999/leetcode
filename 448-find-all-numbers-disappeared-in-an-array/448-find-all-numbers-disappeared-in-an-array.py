class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        n=len(nums)
        l=set(range(1,n+1)) 
        nums=set(nums)
        return list(l-nums)

        