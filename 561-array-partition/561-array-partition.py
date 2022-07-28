class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        res=0
        n=len(nums)
        for i in range(0,n,2):
            res+=min(nums[i],nums[i+1])
        return res
            