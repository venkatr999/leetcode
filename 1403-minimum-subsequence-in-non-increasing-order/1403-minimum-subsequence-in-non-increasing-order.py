class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        nums.sort(reverse=True)
        s=sum(nums)
        curr=0
        l=[]
        for i in nums:
            curr+=i
            l.append(i)
            if curr>s-curr:
                return l
        return l
        