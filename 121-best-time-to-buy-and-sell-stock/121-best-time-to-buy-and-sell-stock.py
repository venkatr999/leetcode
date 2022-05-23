class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min1=prices[0]
        res=0
        for i in prices:
            min1=min(min1,i)
            res=max(res,i-min1)
        return res
        