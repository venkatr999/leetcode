class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        m=1
        l=1
        for i in range(1,len(nums)):
            if nums[i]>nums[i-1]:
                m+=1
            else:
                m=1
            l=max(l,m)
        return l
                