class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        n=len(nums)
        lis=[1]*n
        for i in range(1,n):
            for j in range(i):
                if(nums[j]<nums[i] and lis[i]<lis[j]+1):
                    lis[i]=lis[j]+1
        return max(lis)
        